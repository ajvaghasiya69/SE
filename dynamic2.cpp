#include<iostream>
using namespace std;
class shape
{
	public:
		virtual void draw()
		{
			cout<<"draw shape"<<endl;
		}
};
class circle:public shape
{
	public:
		void draw() override
		{
			cout<<"draw circle"<<endl;
		}
		
};
class squre:public shape
{
	public:
		void draw() override
		{
			cout<<"draw squre"<<endl;
		}
};
int main()
{
	shape* shape;
	circle circle;
    squre squre;
    
    shape=&circle;
    shape->draw();
    
    shape=&squre;
    shape->draw();
}
