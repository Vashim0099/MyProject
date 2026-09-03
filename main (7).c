/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n ;
    int sum = 0;
    int product = 1 ;
    int max1 = 1  ;
    int max2 =100 ;
    printf("Enter you array size\n");
    scanf("%d",&n);
    int arr[n] ;
    for(int i=0;i<=n;i=i+1)
    { 
        printf("Enter the input value for array elements\n");
        scanf("%d",&arr[i]);
        printf(" %d block have this %d \n",i,arr[i]);
        sum = sum + arr[i] ;
        product=product*arr[i];
        printf("The sum is %d and product is %d\n",sum, product);
    }
    
    for(int j=0; j<=n; j++)
    {
    if(max1<arr[j])
    {
        
        max1=arr[j];
        
    }
    
    }
    printf("max value of a given element is : %d\n",max1);
    
        for(int k=0; k<=n; k++)
    {
    if(max2>arr[k])
    {
        
        max2=arr[k];
        
    }
    
    }
    printf("min value of a given element is : %d\n",max2);
    
    
    return 0;
}