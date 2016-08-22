#include <stdio.h>
#include <string.h>

struct Data {
  int i;
  float f;
  char str[20];
};

int main(){
  struct Data data;
  printf("Memory size of data : %lu\n", sizeof(data));
  printf("Memory size of int : %lu\n", sizeof(data.i));
  printf("Memory size of float : %lu\n", sizeof(data.f));
  printf("Memory size of str[] : %lu\n", sizeof(data.str[20]));

  printf("===================================\n");
  data.i = 10;
  data.f = 220.5;
  strcpy(data.str, "C Programming");
  printf("Memory size of int : %d\n", data.i);
  printf("Memory size of float : %f\n", data.f);
  printf("Memory size of str[] : %s\n", data.str);
  printf("===================================\n");
  data.i = 10;
  printf("Memory size of int : %d\n", data.i);
  data.f = 220.5;
  printf("Memory size of float : %f\n", data.f);
  strcpy(data.str, "C Programming");
  printf("Memory size of str[] : %s\n", data.str);

  return 0;
}
