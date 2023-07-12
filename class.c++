#include<iostream>
#include<string>
using namespace std;
	string name;
	int age;
	
	class cricketer
	
	{
		public:
			cricketer()
			{
				cout<<"Enter your name:"<<endl;
			    getline(cin,name);
				cout<<"Enter Your Age:"<<endl;	
			    cin>>age;
			    cout<<"Welcome "<<name<<" to our cricket team"<<endl;
			    cout<<"Your age is:"<<age<<endl;
			}
			
			bolar()
			{
				int match, wickets, maiden, runs;
				cout<<"match played"<<endl;
				cin>>match;
				cout<<"wickets taken"<<endl;
				cin>>wickets;
				cout<<"maiden over"<<endl;
				cin>>maiden;
				cout<<"runs gives"<<endl;
				cin>>runs;
				
				cout<<"match played:"<<match<<endl;
				cout<<"wickets taken:"<<wickets<<endl;
				cout<<"maiden over:"<<maiden<<endl;
				cout<<"runs gives:"<<runs<<endl;
				
				int economy;
			    economy=runs/match;
			    cout<<"Economy: "<<economy<<endl;
				
         	}
         	bestmen()
         	{
         		int match,runs,century;
         		cout<<"match played"<<endl;
				cin>>match;
				cout<<"runs made"<<endl;
				cin>>runs;
				cout<<"century"<<endl;
				cin>>century;
				
				cout<<"match played:"<<match<<endl;
				cout<<"runs made:"<<runs<<endl;
				cout<<"century:"<<century<<endl;
				int economy;
				economy=runs/match;
			cout<<"Economy: "<<economy<<endl;
				
			 }
			 allrounder()
			 {
			 int match, maiden, wickets, runs_given, runs_scored, century;
			 cout<<"match played"<<endl;
			 cin>>match;
			 cout<<"maiden over"<<endl;
			 cin>>maiden;
			 cout<<"wicket taken"<<endl;
			 cin>>wickets;
			 cout<<"runs given"<<endl;
			 cin>>runs_given;
			 cout<<"century"<<endl;
			 cin>>century;
			 
			 cout<<"Matches Played: "<<match<<endl;
			cout<<"Maiden Overs: "<<maiden<<endl;
			cout<<"Runs Given: "<<runs_given<<endl;
			cout<<"Wickets taken: "<<wickets<<endl;
			cout<<"Runs Scored:"<<runs_scored<<endl;
			cout<<"Century: "<<century<<endl;
			 }
	};
	int main()
	{
		cricketer c;
		string choice;
	cout<<"Welcome to our team"<<endl;
	cout<<"Your Role:"<<endl;
	cin>>choice;
	
	cout<<name<<" You Choose "<<choice<<endl;
	if(choice == "bolar" || choice == "Boar" || choice == "BOLAR")
	{
	
	c.bolar();
	}
	else if(choice == "bestmen" || choice == "Bestmen" || "BESTMEN")
	{
		c.bestmen();
	}
	else
	{
		c.allrounder();
	}
}
