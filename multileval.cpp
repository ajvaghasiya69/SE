#include<iostream>
using namespace std;

class dada
{
	public:
		void car()
		{
		
		cout<<"dada ki car"<<endl;
	}
};
class papa:public dada
{
	public:
		void land()
		{
			cout<<"papa ki land"<<endl;
		}
};
class beta:public papa
{
	public:
		void bussiness()
		{
			cout<<"bete ka bussiness"<<endl;
		}
};
int main()
{

 beta p;
p.bussiness();
p.car();
p.land();
}
