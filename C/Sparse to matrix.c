////////////////Made by Anubhav Kumar/////////////////////
////////////////Github: Anubhav-kr////////////////////////

#include<stdio.h>
int main(){
    int a[100][100],b[100][3],i,j,k=1,m,n,d;
    printf("Enter the number of rows of 2D array: ");
    scanf("%d",&d);
    printf("Enter %d 2D matrix elements row wise: ",d*3);
    for(i=0;i<d;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nThe 2D array matrix is\n");
    for ( i = 0; i <d; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    m=b[0][0];
    n=b[0][1];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==b[k][0] && j==b[k][1])
            {
                a[i][j]=b[k][2];
                k++;
            }
            else
            {
                a[i][j]=0;
            }
        }
    }
    printf("\nThe sparse matrix is\n");

    for ( i = 0; i < m; i++) 
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        
    }
}