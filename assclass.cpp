#include<iostream>
using namespace std;
class member
{
	public:
		void name()
		{
			cout<<"name"<<endl;
		}
		void age()
		{
			cout<<"age"<<endl;
		}
};
class student
{
	public:
		void percentage()
		{
			cout<<"percentage"<<endl;
		}
};
class teacher: public member,public student
{
	public:
		void member_salary()
		{
			cout<<"member_salary"<<endl;
		}
};
int main()
{
	teacher ravi;
	ravi.member_salary();
	
}
