//What problem in code can you explain
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int b = 1 ;
    int i ;
    int a ;
    int attempt ;
    srand(time(0));
    
    printf("Enter value of i as 1 for on and 0 for off\n");
    scanf("%d",&i);//for input value of i
    while( i== 1)
    {
        int rannum = (rand() % 100 + 1); //rannum is random number between 1-100
        for(attempt = 1 ; attempt<=3 ; attempt++) //Number of attempts
        {
        printf("this is your %d attempt\n",attempt);
        printf("Enter the guess value\n");
        scanf("%d",&a);
        if(a==rannum) //if we guess right
        {
            printf("You guess right\n");
            break;
        }else if(a!=rannum)// if our guess is wrong 
        {
            if(a<rannum)
            {
                printf("You guess is too low\n");
            }else if(a>rannum)
        {
            printf("Your guess is too high\n");
        }else{}
        }
        
//loop run only three times
        
        }
        
    printf("Enter any number execpt 1 , to stop it\n  ");
        if( scanf("%d",&i) != 1) //for stopping loop or exiting 
        {
            printf("You are exit from game\n"); //message to end
        }
    }
    return 0;
}

//end of code
