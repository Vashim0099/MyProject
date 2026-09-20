// This code is deigned for with myltiple array
#include <stdio.h>
#include<string.h>
struct Student{
    char x[10] ;//Here x is use for Roll Number 
    char y[50] ;//Here y is use for Name
    char z[10] ;//Here x is use for Marks
};

int main()
{
	int a = 1 ; // To start loop and continue in the end or stop the loop
	int Max ; //Maximum student data to allowed
	int i , j , k , n ;
  // Integer for loops and array data entry
	while(a==1)
	{
	    
		
		printf("Enter Max Student to allow\n");
	    printf("--------------------------------\n");
		scanf("%d",&Max);
		printf("--------------------------------\n");
		

		struct Student SName[Max];
		struct Student RollNumber[Max];
		struct Student Marks[Max];
		getchar();
		
		printf("-----–---------------\n"); 
		printf("Enter Name\n");
		for(i = 1 ; i<=Max ; i++)
		{
		fgets(SName[i-1].y , 50 , stdin);
		}
		
		
		printf("---------------------------\n");
		printf("Enter roll number\n");
		for(j = 1 ; j <=Max ; j++)
		{
		fgets(RollNumber[j-1].x ,10, stdin);
		}
		
		
		printf("<---------------------------\n");
		printf("Enter Marks\n");
		for(k=1 ; k <= Max ; k++)
		{
		fgets(Marks[k-1].z , 10 , stdin);
		} 
		
		printf("Enter roll number to find details\n");
		scanf("%d",&n);
		
		SName[n-1].y ;
    //data of Name 
		RollNumber[n-1].y ;
    //Roll number
		Marks[n-1].z ;
    ///Marks
		 
		printf("The Name is : %s\n The Roll Number is : %s \n Marks is : %s\n",SName[n-1].y,RollNumber[n-1].x,Marks[n-1].z);
		printf("Enter the value 1 to continue\n");
		
		getchar();
		scanf("%d",&a);
	
	}

	return 0;
}
