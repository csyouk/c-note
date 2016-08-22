#include <stdio.h>

int main(void){
  char ch;
  int len=0;
  
  printf("Enter a message\n");

  ch = getchar();
  while(ch!='\n'){
    len++;
    ch = getchar();
  }
  printf("Ur message length is %d\n", len);

  return 0;
}
