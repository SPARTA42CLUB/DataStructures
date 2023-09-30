#include <stdio.h>
#include <stdlib.h>
#include "Person.h"
#include "Table.h"

int MyHashFunc(int k)
{
  return (k % 100);
}

int main(void)
{
  Table myTable;
  Person *np;
  Person *sp;
  Person *rp;

  TBLInit(&myTable, MyHashFunc);

  // input data //
  np = MakePersonData(900254, "Lee", "Seoul");
  TBLInsert(&myTable, GetSSN(np), np);

  np = MakePersonData(900139, "KIM", "Jeju");
  TBLInsert(&myTable, GetSSN(np), np);

  np = MakePersonData(900827, "HAN", "Kangwon");
  TBLInsert(&myTable, GetSSN(np), np);

  // serch data //
  sp = TBLSearch(&myTable, 900254);
  if (sp != NULL)
    ShowPerInfo(sp);

  sp = TBLSearch(&myTable, 900139);
  if (sp != NULL)
    ShowPerInfo(sp);

  sp = TBLSearch(&myTable, 900827);
  if (sp != NULL)
    ShowPerInfo(sp);

  // delete data //
  rp = TBLDelete(&myTable, 900254);
  if (rp != NULL)
    free(rp);

  rp = TBLDelete(&myTable, 900139);
  if (rp != NULL)
    free(rp);

  rp = TBLDelete(&myTable, 900827);
  if (rp != NULL)
    free(rp);

  return (0);
}
