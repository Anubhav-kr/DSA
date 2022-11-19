////////////////Made by Anubhav Kumar/////////////////////
////////////////Github: Anubhav-kr////////////////////////

#include<stdio.h>
#include<string.h>
void main()
{
	int A[100];
	int i,n,sum=0;
	printf("enter the length of array<100:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        printf("A[%d]-",i);
        scanf("%d",&A[i]);
    }
     for(i=0;i<n;i++)
     {
         sum=A[i]+sum;
     }
        printf("Sum=%d",sum);
}
