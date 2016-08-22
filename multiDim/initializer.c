#include <stdio.h>
#define N 2
int m[N][N] = {{1232,2}};
int main(void){
int row, col;
  for(row =0;row<N;row++)
    for(col=0;col<N;col++)
      printf("m[%d][%d] is %d\n", row,col,m[row][col]); 
  return 0;
}
