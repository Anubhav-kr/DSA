////////////////Made by Anubhav Kumar/////////////////////
////////////////Github: Anubhav-kr////////////////////////

#include<stdio.h>

void main()
{
	int a[100];
    int i,j,t,n,pos;
	printf("enter the length of array<100:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        printf("A[%d]-",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        pos=i;
        for (j= i+1; i < n; j++)
        {
            if (a[pos]>a[j])
            {
                pos=j;
            }
            if (pos!=i)
            {
                t=a[i];
                a[i]=a[pos];
                a[pos]=t;
            }
        }
         
    }
    for (i = 0; i < n; i++) 
    {
        printf("\n%d", a[i]);
    }
    
}