////////////////Made by Anubhav Kumar/////////////////////
////////////////Github: Anubhav-kr////////////////////////

#include <stdio.h>  
#include <conio.h>  
  
int main ()  
{  
    int arr[50];  
    int loc, i, num; 
    printf (" \n Enter the number of elements in an array: \n ");  
    scanf (" %d", &num);   
    printf (" \n Enter %d elements in array: \n ", num);   
    for (i = 0; i < num; i++ )  
    {   printf (" arr[%d] = ", i);  
        scanf (" %d", &arr[i]);  
    }   
    printf( " Define the locition of the array element where you want to delete: \n ");  
    scanf (" %d", &loc); 
    if (loc >= num+1)  
    {  
        printf (" \n Deletion is not locsible in the array.");  
    }  
    else  
    {  
        for (i = loc - 1; i < num -1; i++)  
        {  
            arr[i] = arr[i+1]; 
        }  
          
        printf (" \n The resultant array is: \n");  
      
        for (i = 0; i< num - 1; i++)  
        {  
            printf (" arr[%d] = ", i);  
            printf (" %d \n", arr[i]);  
        }  
    }  
    return 0;  
}  