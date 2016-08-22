#include <stdio.h>
#define N 10

int main(void){
  int a[N];
  
  int i=0, j=0,k=0;
  while(i++<N){
    printf("%d value is %d\n",i, a[i]);
  }  

  while(j < N){
    printf("%dth value is %d\n", j, a[j]);
    a[++j] = 12;
  }

  while(k<N){
    printf("%d\n", a[k]);
    k++;
  }
  
  return 0;
}
