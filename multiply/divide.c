//
//  pointer.c
//  
//
//  Created by CS6 on 6/17/15.
//
//

#include <stdio.h> 

int height = 8;
float profit = 3.14;
float totalIncome;

int main(void){
    // if final type is predefined, operate between int and float would be fine
    totalIncome = height*profit/39;
    printf("total income is : %f\n", totalIncome);
    
    return 0;
}
