#include <stdio.h>
int main(void){
int height, length, width, volume, weight;

printf("Enter height : ");
scanf("%d", &height);
printf("Enter length: ");
scanf("%d", &length);
printf("Enter width: ");
scanf("%d", &width);
volume = height*length*width;

weight = (volume+165)/166;
printf("Volume  :%d\n ", volume);
printf("Dim :%d\n ", weight);
// weight 의 값은 float가 나올 수 있다. 하지만, 정수 부분만 때서 보여준다.

return 0;
}
