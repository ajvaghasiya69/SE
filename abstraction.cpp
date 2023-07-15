#include<iostream>
using namespace std;

class lecture
{
	public:
		virtual  attendance();
};
class akshay:public lecture
{
	public:
		void lect1()
		{
			cout<<"thundar"<<endl;
		}
		int attendance()
		{
			cout<<"compalsary"<<endl;
		}
};
int main()
{
	akshay d;
	d.attendance();
}
