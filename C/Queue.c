////////////////Made by Anubhav Kumar/////////////////////
////////////////Github: Anubhav-kr////////////////////////

#include<stdio.h>
#include <stdlib.h>
#define MAX 3
int q[MAX];
int r=-1;
int f=-1;
void insert();
void delete();
void display();

main()
{
    int ch;
    while(1)
    {
    printf("\n Queue operation");
    printf("\n 1.Insert\n 2.Delete\n 3.Display\n 4.Exit");

    printf("\nEnter Choice:");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        insert();
        break;

        case 2:
        delete();
        break;

        case 3:
        display();
        break;

        case 4:
        exit(0);
        
        default:
        printf("ex");
    }

    }
}
void insert()
{
    int da;
    if(r==MAX-1)
    {
        printf("Full");
        return ;
    }
    else
    {   if(f==-1)
        f=0;
        printf("Enter The Element");
        scanf("%d",&da);
        r++;
        q[r]=da;
        printf("Data Stored");
    }
}
void delete()
{
    if(f==-1||f>r)
    {

        printf("No Data");
        return;
    }
    else
    {
        printf("Deleted element is %d",q[f]);
        f++;
    }
}
void display()
{
    int i;
    if(f==-1)
    {
        printf("Queue is empty ");
        return;
    }
    else
    {
        printf("Element is");
        for(i=f;i<=r;i++)
        {
            printf("\n%d:%d",i,q[i]);
        }
    }
}