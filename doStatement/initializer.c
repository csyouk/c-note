#include <stdio.h>

int main(void){
  int digits=0, n;

  printf("Enter a nonnegative number");
  scanf("%d\n",&n);
  
  do{
    n /=10;
    digits++;
  } while(n>0);

  printf("The number you entered has %d digit(s)\n", digits);

  return 0;
}
