#include<iostream>
#include<string>
using namespace std;
class info
{
	public:
	string name;
	string address;
	void information(string name,string address)
	{
		this->name = name;
			this->address = address;
	}
};
class teacher
{
	public:
		int salary;
		void detail(int salary,info*in)
		{
			cout<<"Name is: "<<in->name<<endl;
			cout<<"Address is: "<<in->address<<endl;
			cout<<"Salary is: "<<salary<<endl;
		}
};
int main()
{	
	teacher t;
	info i;
	i.information("akshay","ahmedabad");
	t.detail(100,&i);
	
}
