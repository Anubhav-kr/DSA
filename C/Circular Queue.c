////////////////Made by Anubhav Kumar/////////////////////
////////////////Github: Anubhav-kr////////////////////////

#include <stdio.h>  
#include<stdlib.h> 
# define max 4
void insert();

int queue[max];  
int f=-1;  
int r=-1;  
int main()  
{  
    int ch,x;
    while(1)
    {
    printf("\n Circular Queue operation");
    printf("\n 1.Insert\n 2.Delete\n 3.Display\n 4.Exit");

    printf("\nEnter Choice:");
    scanf("%d",&ch);

    switch(ch)  
       {   
        case 1:  
      
        printf("Enter the element which is to be inserted");  
        scanf("%d", &x);  
        insert(x);  
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
void insert(int element)  
{  
    if(f==-1 && r==-1)    
    {  
        f=0;  
        r=0;  
        queue[r]=element;  
    }  
    else if((r+1)%max==f)  
    {  
        printf("Queue is overflow..");  
    }  
    else  
    {  
        r=(r+1)%max;      
        queue[r]=element;     
    }  
}  
  

int delete()  
{  
    if((f==-1) && (r==-1))  
    {  
        printf("\nQueue is underflow..");  
    }  
 else if(f==r)  
{  
   printf("\nThe deleted element is %d", queue[f]);  
   f=-1;  
   r=-1;  
}   
else  
{  
    printf("\nThe deleted element is %d", queue[f]);  
   f=(f+1)%max;  
}  
}  
 
void display()  
{  
    int i=f;  
    if(f==-1 && r==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=r)  
        {  
            printf("%d,", queue[i]);  
            i=(i+1)%max;  
        }  
    }  
}  
