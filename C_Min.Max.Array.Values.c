/*********************************************************************
* Filename:   C_Array.Value.c
* Author:     Javier Montenegro (javiermontenegro.github.io)
* Copyright:  @2019
* Details:    this gist is a example of how to find min and max 
              array values in ANSI C
*********************************************************************/

#include<stdio.h>
#include <time.h>

void max_value(int arr[],int size);
void min_value(int arr[],int size);
void display(int arr[],int size);

void max_value(int arr[],int size){
    int max_no = arr[0];
    
    for(int i=0; i < size; i++){
        if(arr[i] > max_no){
            max_no = arr[i];            
        }//End if
    }//End for
    
    printf("\nArray MAX value: %d", max_no);
}//End largest_array

void min_value(int arr[],int size){
    int min_no = arr[0];
    
    for(int i=0; i < size; i++){
        if(arr[i] < min_no){
            min_no = arr[i];            
        }//End if
    }//End for
    
    printf("\nArray MIN value: %d\n\n", min_no);
}//End smallest_array

void display(int arr[],int size){
    int *ptr;
    ptr = &arr[0];
    printf("Array address is: %d\n",ptr); 

    printf("\nThe elements of the array are:\n");
    for(int i=0;i<size;i++){
        printf("Position: %d | Value: %d | Address: %d\n", i, arr[i], &arr[i]);
    }//End for    
}//End display

int main(int argc, char **argv){
    int arr[100],size;
    
    printf("Enter the size of the array\t");
    scanf("%d",&size);
    
    for(int i=0;i<size;i++){
        printf("Enter element %d\t",i+1);
        scanf("%d",&arr[i]);
    }//End for

    printf("------------\n");
    
    clock_t start = clock();
    printf("Array Info:\n");

    max_value(arr,size);
    min_value(arr,size);
    display(arr,size);

    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nTime spent: %f\n", time_spent);
    return 0;
}//End main
