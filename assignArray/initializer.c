#include <stdio.h>

int main(void){
  int i =0;
  char a2[] = "aaaa";
  char a1[] = "bbb";

  printf("%lu\n",sizeof(a2));
  printf("%lu\n",sizeof(a1));
  printf("%c\n",a2[4]);
  printf("---\n");
  for(i =0; i<sizeof(a2);i++){
    a2[i]=a1[i];
    printf("%c\n", a2[i]);
  }
  printf("---\n");
  printf("%c\n", a2[4]);

  return 0;
}
