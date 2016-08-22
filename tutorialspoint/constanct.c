#include <stdio.h>

#define LENGTH 100
#define NEWLINE '\n'


int main() {

  int area;
  const int WIDTH = 30;
  area = LENGTH * WIDTH;
  printf("value of area : %d", area);
  printf("%c", NEWLINE);
  return 0;
}
