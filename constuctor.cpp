#include<iostream>
#include<string>
using namespace std;

class uday
{
	public:
		void dost()
		{
			cout<<"called relative"<<endl;
		}
		uday()
		{
			cout<<"Called Constructor"<<endl;
			cout<<"friend's friend"<<endl;
		}
		~uday()
		{
			cout << "Called Destructor" << endl;
			cout << "Bye-bye!" << endl;
		}
	
	
	
};
int main()
{
	uday u;
}
