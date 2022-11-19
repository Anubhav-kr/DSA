////////////////Made by Anubhav Kumar/////////////////////
////////////////Github: Anubhav-kr////////////////////////
#include<stdio.h>
#include<string.h>
void main()
{
    int a[100];
    int i,n,x,e;

    printf("Enter number of list-");
    scanf("%d",&n);

    for ( i = 0; i <n; i++)
    {
        printf("A[%d]:-",i);
        scanf("%d",&a[i]);
    }
    printf("Enter address of element:-");
    scanf("%d",&x);
    printf("Enter the value:-");
    scanf("%d",&e);
    for ( i = n; i >=x; i--)
    {
        a[i]=a[i-1];
    }
       a[x]=e;
     printf("new array-");   
    for ( i = 0; i<=n; i++)
    {
        
        printf("\n%d",a[i]);
    }
    

}