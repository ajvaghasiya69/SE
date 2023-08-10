#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string data;
	ofstream filename;
	
	filename.open("tops.txt",ios::app);
	
	cout<<"enter data"<<endl;
	getline(cin,data);
	
	filename<<data;
	filename.close();
	}
