#include <stdio.h>
double avr(double a, double b);

int main(void){
  double x,y,z;
  scanf("%lf%lf%lf", &x, &y, &z);
  
  printf("Avr of %g and %g: %g\n", x,y, avr(x,y));
  return 0;
}

double avr(double a, double b){
  return (a+b)/2;
}
