/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 int num ;
 printf("Enter the number where you want to print prime number\n");
 scanf("%d",&num);
 int x = num;
 printf("2 and 3 is a prime number\n");
 if(num>=3)
 {
 for(int i=1;i<=x;i++)
 {
     int c=6*i+1;
     int d=6*i-1;
     printf("%d and %d are prime number\n",d ,c);

 }
 }
 
     
 
    return 0;
}