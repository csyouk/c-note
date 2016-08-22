#include <stdio.h>

int main(){
  int index = 0;
  for ( ; ; ) {
    printf("[%d] This will run forever\n", index);
    index++;
  }
  return 0;
}
