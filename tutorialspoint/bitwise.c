#include <stdio.h>

int main(){
  int a = 60;
  int b = 13;

  int and_operator = a&b;
  int or_operator = a|b;
  int xor_operator = a^b;
  int complement_operator = ~a;
  int left_shift_operator = a<<2;
  int right_shift_operator = a>>2;
  printf("BINARY AND %d\n", and_operator);
  printf("BINARY OR %d\n", or_operator);
  printf("BINARY XOR %d\n", xor_operator);
  printf("BINARY Complement %d\n", complement_operator);
  printf("BINARY Left Shift Operator %d\n", left_shift_operator);
  printf("BINARY Right Shift Operator %d\n", right_shift_operator);
  return 0;
}
