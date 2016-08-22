#include <stdio.h>

int main(void){
  int i, a[10] = {1,4,2,3,2,3,2,2,1,2};
  int b[10] = {1,5,3};  
  for(i=0;i<10;i++){
    printf("a value is %d\n", a[i]);
    printf("b balue is %d\n", b[i]);
  }

  return 0;
}
