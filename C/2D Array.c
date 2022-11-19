////////////////Made by Anubhav Kumar/////////////////////
////////////////Github: Anubhav-kr////////////////////////





#include <stdio.h>
void main()
 {
    int r,c,a[10][10],sum=0,i,j,k,b[10][10];
    printf("Enter number of row and colum");
    scanf("%d%d",&i,&j);
    for ( r = 0; r < i; r++)
     {
		for ( c = 0; c < j; c++) 
        {
			printf("A[%d][%d]-",r,c);
            scanf("%d",&a[r][c]);
		}
	 }
    for (int i = 0; r < i; i++)
        for (int j = 0; c < j; j++)
            if (a[i][j] != 0)
            {
                b[0][k] = i;
                b[1][k] = j;
                b[2][k] = a[r][c];
                k++;
            }
	for ( r = 0; r < 2; r++) 
    {
		for ( c = 0; c < 3; c++) 
        {
			printf("%d ", a[r][c]);
		}
		printf("\n");
	}

 }
