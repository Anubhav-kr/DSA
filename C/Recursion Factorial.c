////////////////Made by Anubhav Kumar/////////////////////
////////////////Github: Anubhav-kr////////////////////////

#include <stdio.h>
 long f(int n)
 {
     if(n==0)
        return 1;
     else
        return (n*f(n-1));
 }
 void main()
 {
     int num;
     long fact;
     printf("Enter the Number:");
     scanf("%d",&num);

     fact=f(num);
     printf("Factorial of %d is %ld\n",num,fact);
    
 }