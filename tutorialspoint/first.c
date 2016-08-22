// related with second.c
// when compile : gcc first.c second.c -o first_and_second.o
#include <stdio.h>

int count;
extern void write_extern();

int main(){
  count = 5;
  write_extern();
}
