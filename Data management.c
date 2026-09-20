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
	int i , j , k , n ;
	while(a==1)
	{
	    
		
		printf("Enter Max Student to allow\n");
	    printf("----------------------\n");
		scanf("%d",&Max);
		printf("-----------------------\n");
		

		struct Student Student[Max];
		getchar();
		
		printf("-----–---------------\n"); 
		printf("Enter Name\n");
		for(i = 1 ; i<=Max ; i++)
		{
		fgets(Student[i-1].Name , 50 , stdin);
		}
		
			printf("-----–---------------\n"); 
		printf("Enter RollNumber\n");
		for(i = 1 ; i<=Max ; i++)
		{
		fgets(Student[i-1].RollNumber , 10 , stdin);
		}
		
			printf("-----–---------------\n"); 
		printf("Enter Marks\n");
		for(i = 1 ; i<=Max ; i++)
		{
		fgets(Student[i-1].Marks , 10 , stdin);
		}
		
		printf("Enter the Serial Number \n");
		scanf("%d",&n);
		Student[n-1].Name;
		Student[n-1].RollNumber;
		Student[n-1].Marks;
		
		if(n>=1&&n<=Max)
		{
		printf("Name is %s\n",Student[n-1].Name);
		printf("Roll Numbers is %s\n",Student[n-1].RollNumber);
		printf("Marks is %s\n",Student[n-1].Marks);
		}else {
		    printf("Error\n");
		}
		printf("Enter 1 to continue\n");
		scanf("%d",&a);
		
	}
	return 0;
}

