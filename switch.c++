#include<iostream>
using namespace std;
 
 int main()
 {
 	int choice;
 	cout<<"enter your choice:"<<endl;
 	cin>>choice;
 	
 	switch(choice)
 	{
 		
 		case 1:
 			cout<<"monday"<<endl;
 			break;
 		case 2:
 			cout<<"tuesday"<<endl;
 			break;
 		case 3:
 			cout<<"wenasday"<<endl;
 			break;
 		case 4:
 			cout<<"tuesday"<<endl;
 			break;
 		case 5:
 			cout<<"friday"<<endl;
 			break;
 		case 6:
 			cout<<"satuerday"<<endl;
 			break;
 		case 7:
 			cout<<"sunday"<<endl;
 			break;
 		
 		default:
 			cout<<"enter valid choice";
	 }
 }
