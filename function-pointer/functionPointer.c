#include <stdio.h>

int addInt(int n, int m){
  return n+m;
};
int (*functionPtr)(int, int);

int add2to3(int (*functionPtr)(int, int)){
  return (*functionPtr)(2,3);
}


int main() {
  functionPtr = &addInt; // *functionPtr = addInt

  int sum = (*functionPtr)(2,3);
  printf("(%d)\n", sum);
  return 0;
}
