#include <stdio.h>
int main(){
// declaration NOT initialization!!!!
int i, *p;
p = &i;
printf("%d\n", i);
printf("%p\n", p);
return 0;
}
