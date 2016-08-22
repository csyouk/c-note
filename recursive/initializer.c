#include <stdio.h>

int sum(int n);

int main(void){
  int total, x = 100;
  total = sum(100);
  printf("total %d\n", total);  
  return 0;
}

 
int sum(int n){
  if(n==0) return n;
  else return n+sum(n-1);
} 
