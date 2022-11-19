////////////////Made by Anubhav Kumar/////////////////////
////////////////Github: Anubhav-kr////////////////////////


#include<stdio.h>
#include<string.h>
void main()
{
    int a[100];
    int i,n,lb,ub,key,flag=0,mid=0;

    printf("Enter number of list-");
    scanf("%d",&n);

    for ( i = 0; i <n; i++)
    {
        printf("A[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to search-");
    scanf("%d",&key);
    printf("Enter the Lower number");
    scanf("%d",&lb);
    printf("Enter the upper number");
    scanf("%d",&ub);
    while (lb<=ub)
    {
        mid=(lb+ub)/2;                         
        if (key==a[mid])                      
        {
            flag=1;
            break;
        }
        else if (key<a[mid])
        {
            ub=mid-1;
        }
        else (key>a[mid]);
        {
            lb=mid+1;
        } 
               
    }
    if (flag==1)
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }   
    

}