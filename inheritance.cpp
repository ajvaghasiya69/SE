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
class precious_metal_manufactring :public gold_manufactring
        {
        	public:
        		void diamond()
        	{
        		cout<<"diamond"<<endl;
			}
			void other_metal()
        	{
        		cout<<"other_metal"<<endl;
			}
		};
		int main()
{
	
	precious_metal_manufactring neckless;
	neckless.diamond();
	neckless.other_metal();
}
	

