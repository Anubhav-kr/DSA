////////////////Made by Anubhav Kumar/////////////////////
////////////////Github: Anubhav-kr////////////////////////

#include<stdio.h>

void main()
{
	int a[100];
    int i,j,t,n;
	printf("enter the length of array<100:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        printf("A[%d]-",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        for (j = 0; j < (n-i-1); j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
            
        }
        
    }
    for (i = 0; i < n; i++) 
    {
        printf("\n%d", a[i]);
    }
    
}