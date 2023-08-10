#include<iostream>
using namespace std;
class students
{
	public:
		void roll_number()
		{
			cout<<"roll number"<<endl;
		}
};
class test : public students
  
  { public:
       void subject1marks ()
       {
       	cout<<"subject 1 marks"<<endl;
	   }
	   void subject2marks ()
	   {
	   	cout<<"subject 2 marks"<<endl;
	   }
};
class result : public test
{public:
	int subject1marks(80); 
	int subject2marks(90);
	void totalmarks()
	
	{   
		int totalmarks=subject1marks + subject2marks;
	cout<<"totalmarks"<<endl;
	}
	
	void roll_number()
	{
	cout<<"roll number"<<endl;
	}
	
        
    
};
int main()
{

    result a;
    
    
    a.totalmarks();
	    a.roll_number();
}
