#include <stdio.h>

int main(void){
  
  int a[10], *p, *q;
  printf("%p\n", &a[0]);
  a[0] = 90;
  printf("%p\n", &a[0]);
 // printf("%p\n", p);
  p = &a[0];
 // printf("%p\n", p);
  q = &a[1];
  *q = 30; 

  printf("%p\n", p);
  printf("%d\n", *p);
  printf("%d\n", *q);

  return 0;
}
