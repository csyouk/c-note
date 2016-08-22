#include <stdio.h>
int i, *p;
int i = 3;
int main(void){
  int *p = &i;
  printf("%d\n", i);
  printf("%d\n", *p); 
  printf("%p\n", &i); 
  printf("%p\n", p);
  printf("%p\n", &p);
  // printf("%d\n", &*i);
  printf("%d\n", *&i); 
  printf("%p\n", *&p);
  return 0;
}
