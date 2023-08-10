#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int choice;
	cout<<"Enter first number:"<<endl;
	cin>>a;
	
	cout<<"Enter secound number:"<<endl;
	cin>>b;
	
	cout<<"Enter your choice:"<<endl;
	cout<<"1 for add"<<endl;
	cout<<"2 for sub"<<endl;
	cout<<"3 for mul"<<endl;
	cout<<"4 for div"<<endl;
	cin>>choice;
	
	if(choice==1)
	{
		cout<<"Addition is:"<<a+b<<endl;
	}
	else if(choice==2)
	{
		cout<<"Substraction is:"<<a-b<<endl;
	}
	else if(choice==3)
	{
		cout<<"Multiplication is:"<<a*b<<endl;
	}
	else if(choice==4)
	{
		cout<<"Division is:"<<a/b<<endl;
	}
	else
	{
		cout<<"Enter valid number"<<endl;
	}
	
	
}
