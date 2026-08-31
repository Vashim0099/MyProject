#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int GuessLogic(int a , int RandomNumber)
{
    
    if(a<=RandomNumber)
    {
        printf("Enter value is too low\n");
    }else if(a>=RandomNumber)
    {
        printf("Enetr number is too high\n");
    }else{}
    
}

int Hint(int RandomNumber)
{
  int sum = 0;
  int lastdigit=RandomNumber%10;
  printf("The last digit : %d\n",lastdigit);
  for(RandomNumber ; RandomNumber>0 ;RandomNumber=RandomNumber/10)
  {
      
      int Remainder=RandomNumber%10;
      sum = sum + Remainder;
  }
  printf("The sum of digit is : %d\n",sum);
  return sum;
}
  


int main()
{
    int i = 1 ;
    srand(time(0));
    while(i==1)
    {
        int a ;
        int RandomNumber=(rand() % 100 + 1);
        for(int attempts =1; attempts<=3;attempts++)
        {
        printf(" Number of attempts : %d\n",attempts);
        printf("Enter you guess number between 1-10\n");
        scanf("%d",&a);

        if(a==RandomNumber)
        {
            printf("Your guess is right\n");
        }else if(1<=a<=100)
        {
            GuessLogic(a , RandomNumber);
            Hint(RandomNumber);
        }
        else
        {
            printf("Enter number in 1-10\n");
        }
        }
        printf("Enter 1 to continue loop and any other number to stop the loop\n");
        if(scanf("%d",&i)!=1){
            printf("1to continue and other to stop\n");
        }
        
    }
    return 0;
}

