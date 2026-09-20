#include <stdio.h>
#include<string.h>
struct Student{
    char RollNumber[10] ;
    char Name[50] ;
    char Marks[10] ;
};

int main()
{
	int a = 1 ;
	int choice ;
	int Max ;
	int i , j , k , n  ;
	char d[10];
	while(a==1)
	{
	    
		
		printf("Enter Max Student to allow\n");
	    printf("----------------------\n");
		scanf("%d",&Max);

		struct Student Student[Max];
		getchar();
		for(i=1;i<=Max;i++)
		{
		printf("-----–---------------\n"); 
		printf("Enter Name\n");
		fgets(Student[i-1].Name , 50 , stdin);
		
		
			printf("-----–---------------\n"); 
		printf("Enter RollNumber\n");
		fgets(Student[i-1].RollNumber , 10 , stdin);
		
		
			printf("-----–---------------\n"); 
		printf("Enter Marks\n");
		fgets(Student[i-1].Marks , 10 , stdin);
		
		}
		printf("Enter the Serial Number \n");
		fgets(d,10 ,stdin);
	
		
		for(n=1;n<=Max;n++)
		{
		    
		   if(strcmp(Student[n-1].RollNumber , d)==0)
		        {
		            printf("Name is %s\n",Student[n-1].Name);
	            	printf("Roll Numbers is %s\n",Student[n-1].RollNumber);
		            printf("Marks is %s\n",Student[n-1].Marks);
		            break;
		        }
	    }
		printf("Enter 1 to continue\n");
		scanf("%d",&a);
		
	}
	return 0;
}
