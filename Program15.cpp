#include <iostream>
using namespace std;
class A{
    int x;
    public:
    void input_A(int x); // function to take input for class A
};
class B{
    int y;
    A obj;
    public:
    void input_B(int x, int y); // function to take input for class B
};
void A:: input_A(int x)
{
    
    cout<<"\n class A Data="<<x<<endl;
}
void B:: input_B(int x, int y)
{
    
    cout<<"\n class B DATA ="<<y<<endl;
    obj.input_A(x);
}
int main()
{
    B objB;// creating object B
    int x,y;
    cout<< "ENTER THE NUMBER FOR CLASS A"<<endl;
    cin>>x;
    cout<<"Enter the number for class B"<<endl;
    cin>>y;
    objB.input_B(x,y);

}
