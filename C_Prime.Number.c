/*********************************************************************
* Filename:   C_Prime.Number.c
* Author:     Javier Montenegro (javiermontenegro.github.io)
* Copyright:  @2019
* Details:    this gist is a example of prime assert algorithm in ANSI C
*********************************************************************/

#include <stdio.h>
#include <time.h>

int fn(int x);

int fn(int a) 
{
  int c;  
  for (c = 2 ; c <= a - 1 ; c++)
   {
      if ( a%c == 0 )
        return 0;
   }//End for
   
   if ( c == a )
      return 1;
}//End fn

int main()
{
    int number;
    
    printf("Enter number:\n");
    scanf("%d", &number);
    
    printf("------------\n");
    
    clock_t start = clock();
    
    if (fn(number))
      printf("%d Is a prime number.\n", number);
    else
      printf("%d Is NOT a prime number.\n", number);
    
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nTime spent: %f\n", time_spent);
    return 0;
}//End main
