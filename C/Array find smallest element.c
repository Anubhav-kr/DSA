////////////////Made by Anubhav Kumar/////////////////////
////////////////Github: Anubhav-kr////////////////////////

#include<stdio.h>
#include<string.h>
void main()
{
	int A[100];
	int i,n,small;
	printf("enter the lengeth of array<100-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        printf("A[%d]-",i);
        scanf("%d",&A[i]);
    }
    small=A[0];
    for(i=0;i<n;i++)
    {
        if(small>A[i])
        {
            small=A[i];
        }
    }
    printf("smallest element is %d",small);
}
