#include<iostream>
using namespace std;
class animal
{
	public:
		virtual void voice()
		{
			cout<<"voice"<<endl;
		}
};
class dog:public animal
{
	public:
		void voice()
		{
			cout<<"wloof"<<endl;
		}
};
class cat :public animal
{
	public:
		void voice()
		{
			cout<<"meow"<<endl;
		}
};
int main()
{
	animal*a;
dog d;
cat c;
a=&c;
a->voice();
}
