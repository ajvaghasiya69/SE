#include<iostream>
using namespace std;

class dada
{
public:
    void land()
    {
        cout << "dada ki jamin" << endl;
    }
};

class papa : public dada
{
public:
    void land()
    {
        dada::land();
        cout << "papa ki jamin" << endl;
    }
};

class chacha : public dada
{
public:
    void land()
    {
        dada::land();
        cout << "chacha ki jamin" << endl;
    }
};

class beta : public papa, public chacha
{
public:
    void car()
    {
        cout << "car" << endl;
    }
};

int main()
{
    beta b;
    b.car();
    b.papa::land();
    b.chacha::land();

    
}

