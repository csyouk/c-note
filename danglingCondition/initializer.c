#include <stdio.h>

int main(void){
  int x=3;
  int y=4;


# compiler would stop the compile
# beacuse conditional statment has dangling else
  if(x!=y)
    if(x==4)
      printf("x value is %d\n", x);
    else
      printf("else case\n");

  return 0;
}
