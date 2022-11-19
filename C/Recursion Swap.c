////////////////Made by Anubhav Kumar/////////////////////
////////////////Github: Anubhav-kr////////////////////////

#include <stdio.h>

void swap(int *ap, int *bp)
{
int t=*ap;

*ap=*bp ;
*bp=t ;
}
int main()
{
int a ,b;
printf("Enter A-");
scanf("%d", &a);
printf("Enter B-");
scanf("%d",&b);
printf("Before Swap A-%d B-%d in Address A-%p B-%p",a,b,a,b);

swap(&a,&b);
printf("\n\nAfter Swap A-%d B-%d In Address A-%p B-%p",a,b,a,b);
return 0;
}