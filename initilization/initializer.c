#include <stdio.h>

int a=0;
int b=1;
int c=2;

// each variable requires it's own initializer

int d,e,f=3;

int main(void){
  printf("a is : %d\n", a);

  printf("b is : %d\n", b);

  printf("c is : %d\n", c);

  printf("d is : %d\n", d);

  printf("e is : %d\n", e);

  printf("f is : %d\n", f);
  
  // un assignmented value would have 0

  return 0;
}
