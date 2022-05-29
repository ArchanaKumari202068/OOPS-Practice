//Program to demonstrate the concept of destructor
#include <iostream>

using namespace std;

class Complex
{
    private:
    int a,b;

    public:

    Complex(int x,int y)
    {
       a=x;
       b=y;
    }
     ~Complex()
    {
      cout<<"destructor"; 
    }
    void display()
    {
      cout<<"the value of a="<<a<<endl<<"the value of b="<<b<<endl;
    }


};

int main()
{
    Complex Obj(23,45);

    Obj.display();

    return 0;
}