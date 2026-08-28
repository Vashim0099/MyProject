/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char E;
    int a , RandomSelection ;
    srand(time(NULL));
    printf("This game is rock paper scissor\n");
    printf("Selct your choice : \n 1. For Rock \n 2. For scissor \n 3. For Paper\n");
    while(E!= 'E'){
        printf("Selct number between : (1-3)\n");
    scanf(" %d",&a);
    RandomSelection = (rand() % 3) + 1 ;
    printf("User choice : %d\n",a);
    if(a==RandomSelection){
        printf("The tie\n");
    }else if(a!=RandomSelection){
        if(a==1 && RandomSelection==3){
            printf("Computer Selected: %d\n", RandomSelection);
            printf("You Loose\n");
        }else if (a==2 && RandomSelection==3){
            printf("You win\n");
            printf("Computer : %d\n",RandomSelection);
        }else if(a==1 && RandomSelection==2){
            printf("You loose\n");
            printf("Computer : %d\n",RandomSelection);
        }else if(a==2 && RandomSelection==1){
            printf("Computer : %d\n",RandomSelection);
            printf("You loose\n");
        }else if(a==3 && RandomSelection==1){
            printf("Computer : %d\n",RandomSelection);
            printf("You won\n");
        }else if(a==3 && RandomSelection==2){
            printf("Computer : %d\n",RandomSelection);
            printf("You loose\n");
        }else{}
       
    }else{}
     printf("Eneter E for exit\n");
        scanf(" %c",&E);
    }
    return 0;
}
    
    

    