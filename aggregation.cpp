#include<iostream>
using namespace std;
class cricket
{
	public:
		string name;
			int age;
			int match;
			void basic(string name,int age,int match)
			{
				this->name=name;
				this->age=age;
				this->match=match;
			}
};
class batsman
{
	public:
		int runs;
		void info(int runs,cricket* obj)
		{
			cout<<"Name : "<<obj->name<<endl;
				cout<<"Age : "<<obj->age<<endl;
				cout<<"match :"<<obj->match<<endl;
				cout<<"Runs : "<<runs<<endl;
		}
};
int main()
{
	cricket c;
	c.basic("Akshay",32,300);
	batsman b;
	b.info(9000,&c);
}
