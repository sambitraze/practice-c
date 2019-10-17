#include <stdio.h>

int main() 
{
  int a;
  int *pa = &a;

  char b = 'x';
  char *pb = &b;
  
  float c = 10.01;
  float *pc = &c;
  
  double d = 10.01;
  double *pd = &d;
  
  long e = 10.01;
  long *pe = &e;
  
  printf("Pointer Example Program : Print Size of Different types Using sizeof\n");

  printf("\n[sizeof(a)   ]: = %d", sizeof(a));
  printf("\n[Addressof(*pa) ]: = %p", *pa);

  printf("\n[sizeof(b)   ]: = %d", sizeof(b));
  printf("\n[Addressof(*pb) ]: = %p", *pb);
  
  printf("\n[sizeof(c)   ]: = %d", sizeof(c));
  printf("\n[Addressof(*pc) ]: = %p", *pc);
  
  printf("\n[sizeof(d)   ]: = %d", sizeof(d));
  printf("\n[Addressof(*pd) ]: = %p", *pd);
  
  printf("\n[sizeof(e)   ]: = %d", sizeof(e));
  printf("\n[Addressof(*pe) ]: = %p", *pe);
  
  return 0;
}