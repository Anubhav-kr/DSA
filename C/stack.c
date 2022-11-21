////////////////Made by Anubhav Kumar/////////////////////
////////////////Github: Anubhav-kr////////////////////////

#include<stdio.h>
#include<stdlib.h>
#define Size 10
int Top=-1, A[Size];
void Push();
void Pop();
void show();
int main()
{
	int choice;
	while(1)
	{
		printf("\nOperations performed by Stack");
		printf("\n 1.Push the element\n 2.Pop the element \n 3.Display \n 4.End");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: Push();
					break;
			case 2: Pop();
					break;
			case 3: show();
					break;
			case 4: exit(0);

			default: printf("\nInvalid choice!!");
		}
	}
}
void Push()
{
	int x;

	if(Top==Size-1)
	{
		printf("\nOverflow!!");
	}
	else
	{
		printf("\nEnter element to be inserted to the stack:");
		scanf("%d",&x);
		Top=Top+1;
		A[Top]=x;
	}
}
void Pop()
{
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nPopped element:  %d",A[Top]);
		Top=Top-1;
	}
}

void show()
{
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nElements present in the stack: \n");
		for(int i=Top;i>=0;--i)
			printf("%d\n",A[i]);
	}
}