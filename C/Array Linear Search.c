////////////////Made by Anubhav Kumar/////////////////////
////////////////Github: Anubhav-kr////////////////////////

#include<stdio.h>
#include<string.h>
void main()
{
int A[100];
    int n,i,key,flag=0;
    printf("Enter the number of list(<100):");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&A[i]);
    }
    printf("Enter the element you want to search");
    scanf("%d",&key);
 for(i=0;i<n;i++)
 {
    if (A[i]==key)
      {
        flag=1;
        break;
      }
 }  
    if (flag==0)
    {
        printf("not found");
    }
    else
      printf("found");
            
 }
