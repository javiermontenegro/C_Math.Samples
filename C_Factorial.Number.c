/*********************************************************************
* Filename:   C_Factorial.Number.c
* Author:     Javier Montenegro (javiermontenegro.github.io)
* Copyright:  @2019
* Details:    this gist is a example of factorial algorithm in ANSI C
*********************************************************************/

#include <stdio.h>
#include <time.h>

int fn(int number);

int fn(int number)
{
 if (number == 1 || number == 0) 
  return 1;
 else 
  return number*fn(number-1);
}//End fn

int main()
{
    int number;
    
    printf("Enter number:\n");
    scanf("%d", &number);
    
    printf("------------\n");
    
    clock_t start = clock();
    printf("Factorial:\n");
    printf("%d\n", fn(number));
    
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nTime spent: %f\n", time_spent);
    return 0;
}//End main
