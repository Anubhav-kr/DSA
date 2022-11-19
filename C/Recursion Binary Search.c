////////////////Made by Anubhav Kumar/////////////////////
////////////////Github: Anubhav-kr////////////////////////

#include <stdio.h>
int rbs(int A[], int start, int end, int key)
{
   if (end >= start)
   {
      int mid = (end + start )/2;
      if (A[mid] == key)
         return mid;
      if (A[mid] > key)
         return rbs(A, start, mid-1, key);
      else   
      return rbs(A, mid+1, end, key);
   }
   return -1;
}
int main(void)
{
   int A[100];
   int n,i;
   int key;
   printf("Enter number of list-");
    scanf("%d",&n);

    for ( i = 0; i <n; i++)
    {
        printf("A[%d]:-",i);
        scanf("%d",&A[i]);
    }
    printf("Enter the number you want to search-");
    scanf("%d",&key);
   int found = rbs(A, 0, n-1, key);
   if(found == -1 ) 
   {
      printf("Element not found in the A ");
   }
   else 
   {
      printf("Element found at index : %d",found);
   }
   return 0;
}