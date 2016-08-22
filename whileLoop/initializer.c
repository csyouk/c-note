#include <stdio.h>

int main(void){

  int i =1;
  int n =10000;
  printf("start\n");
  while(i<n){
    printf("i is %d\n",i);
    i = i*2;
  } 
  return 0;
}
