#include<iostream>
#include<string>
using namespace std;

string name;
int age;

class cricketer
{
	public :
		cricketer()
		{


			cout<<"Enter Your Name:"<<endl;
			getline(cin,name);
			cout<<"Enter Your Age:"<<endl;	
			cin>>age;
			
			cout<<"Welcome "<<name<<" to our cricket team"<<endl;
			cout<<"Your age is:"<<age<<endl;
		}	
		
		
		void batsman()
		{
			int matches,total_runs,avrage_runs,best_perfomance;
			cout<<"matches:"<<endl;
			cin>>matches;
			cout<<"total_run:"<<endl;
			cin>>total_runs;
			avrage_runs = total_runs / matches;
		
			cout<<"best_perfomance"<<endl;
			cin>>best_perfomance;
	
			cout<<"matches "<<matches<<endl;
			cout<<"total_runs "<<total_runs<<endl;
		    cout<<"avrage_runs "<<avrage_runs<<endl;
			cout<<"best_perfomance "<<best_perfomance<<endl;
			
			
		}
		
};


int main()
{
	cricketer c;
    c.batsman();

	
	
	
}
