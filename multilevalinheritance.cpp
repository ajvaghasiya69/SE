#include<iostream>
using namespace std;

class gold_manufactring
{
	public:
		void gold()
		{
			cout<<"gold"<<endl;
		}
		void rodium()
		{
		    cout<<"rodium"<<endl;	
		}
		void brass()
		{
		    cout<<"brass"<<endl;	
		}
	
};
class false_gold_manufactring
{    public:
	       void metal()
	       {
	       	cout<<"metal"<<endl;
		   }
	       void shine()
	       {
	       	cout<<"shine"<<endl;
		   }
};
class silver_manufactring :public gold_manufactring,public false_gold_manufactring
{
	public:
		void silver()
		{
			cout<<"silver"<<endl;
		}
		void worker()
		{
			cout<<"worker"<<endl;
		}
};
		int main()
{
	
	silver_manufactring neckless;
	neckless.silver();
	neckless.worker();
	
}
