/*********************************************************************
* Filename:   C_Fibonacci.Number.c
* Author:     Javier Montenegro (javiermontenegro.github.io)
* Copyright:  @2019
* Details:    This gist is a example of fibonacci algorithm in ANSI C
*********************************************************************/

#include <stdio.h>
#include <time.h>

int fn(int number);
//Fibonnacci function 
int fn(int number)
{
 if(number==1||number==2) return 1;
   else return fn(number-1)+fn(number-2);
}//End fn

int main()
{
    int number;
    
    printf("Enter number:\n");
    scanf("%d", &number);
    
    printf("------------\n");
    
    clock_t start = clock();
    printf("Fibonacci:\n");
    printf("%d\n", fn(number));
    
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nTime spent: %f\n", time_spent);
    return 0;
}//End main