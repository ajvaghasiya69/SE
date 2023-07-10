#include<stdio.h>
int main()
{
	
	printf("----------MENU----------\n\n");
	printf("1.Addition\n");
	printf("2.Substraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n\n");
	
	int choice;
	printf("Enter your choice:\n");
	scanf("%d",&choice);
	int a,b;
	printf("Enter first number:\n");
	scanf("%d",&a);
	printf("Enter secound number:\n");
	scanf("%d",&b);

	

    if (choice==1)
    {
    	printf("Addition =%d\n",a+b);
	}
	else if (choice==2)
	{
		printf("Substraction=%d\n",a-b);
	}
	else if(choice==3)
	{
		printf("Multification=%d\n",a*b);
	}
	else if(choice==4)
	{
		printf("Division=%d\n",a);
	}
	else
	{
		printf("Invalid choice!!!,Please try again.");
	}
	
	
	
}
