#include <stdio.h>
int i;
int inc(int i);

int main(void){
  i = 0;
  i = inc(i);
  printf("%d\n",i);
  i = inc(i);
  printf("%d\n",i);
  i = inc(i);
  printf("%d\n",i);
  i = inc(i);
  printf("%d\n",i);
  i = inc(i);
  printf("%d\n",i);





  return 0;
}

int inc(i){
  i++;
  return i;
};
