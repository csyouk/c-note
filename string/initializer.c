#include <stdio.h>

int main(void){

  char sentence[] = "Hello world";
  int count = 0, i;

  for(i=0; sentence[i]!='\0'; i++){
    count++;
  }

  printf("The string %s has %d characters\n", sentence, count);
  printf("and is stored in %d bytes\n", count+1);

  return 0;
}
