#include "DLinkedList.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void  ListInit(List *plist)
{
  plist->head = (Node *)malloc(sizeof(Node));
  if (!plist->head)
  {
    write(2, "Error\n", 6);
    exit(1);
  }
  plist->cur = NULL;
  plist->before = NULL;
  plist->numOfData = 0;
}

void FInsert(List *plist, LData data)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  if (!newNode)
  {
    write(2, "Error\n", 6);
    exit(1);
  }
  newNode->data = data;
  newNode->next = plist->head->next;
  plist->head->next = newNode;
  (plist->numOfData)++;
}

void SInsert(List *plist, LData data)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  Node *pred = plist->head;
  if (!newNode)
  {
    write(2, "Error\n", 6);
    exit(1);
  }
  newNode->data = data;
  newNode->next = NULL;
  while (pred->next != NULL && plist->comp(data, pred->next->data) != 0)
  {
    pred = pred->next;
  }
  newNode->next = pred->next;
  pred->next = newNode;
  (plist->numOfData)++;
}

void  LInsert(List *plist, LData data)
{
  if (plist->head == NULL)
    FInsert(plist, data);
  else
    SInsert(plist, data);
}

int LFirst(List *plist, LData *pdata)
{
  if (plist->head->next == NULL)
    return (FALSE);
  plist->before = plist->head;
  plist->cur = plist->head->next;
  *pdata = plist->cur->data;
  return (TRUE);
}

int LNext(List *plist, LData *pdata)
{
  if (plist->cur->next == NULL)
      return (FALSE);
  plist->before = plist->cur;
  plist->cur = plist->cur->next;
  *pdata = plist->cur->data;
  return (TRUE);
}


LData LRemove(List *plist)
{
  Node *rpos = plist->cur;
  LData rdata = plist->cur->data;

  plist->before->next = plist->cur->next;
  plist->cur = plist->before;

  free(rpos);
  (plist->numOfData)--;
  return (rdata);
}

int LCount(List *plist)
{
  return (plist->numOfData);
}

void  SetSortRule(List *plist, int (*comp)(LData d1, LData d2))
{
  plist->comp = comp;
}






