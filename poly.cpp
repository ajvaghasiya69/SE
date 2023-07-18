#include<iostream>
using namespace std;
int a,b,c;
class cal
{
	public:
		void av(int a,int b)
		{
			cout<<"first vala"<<a+b<<endl;
		}
};
class adv_cal :public cal
{
	public:
	using cal::av;
	void av(int a,int b,int c)
	{
	
	cout<<"secound vala "<<a+b+c<<endl;
}
};
int main()
{
	adv_cal ak;
	ak.av(1,2,3);
}
