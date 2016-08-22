#include <stdio.h>

int main(void){

  int x=3;
  float y = 3.14;
  char z = 'd';

  
  printf("Size of x is : %lu bytes.\n", sizeof(x));


  printf("Size of y is : %lu bytes.\n", sizeof(y));

  printf("Size of z is : %lu bytes.\n", sizeof(z));


  return 0;
}
