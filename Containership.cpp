#include <iostream>
using namespace std;
class A{
    int x;
    public:
    void input_A();
};
class B{
    int y;
    A obj;
    public:
    void input_B();
};
void A:: input_A()
{
    cout<< "ENTER THE NUMBER FOR CLASS A"<<endl;
    cin>>x;
    cout<<"\n class A Data="<<x<<endl;
}
void B:: input_B()
{
    cout<<"Enter the number for class B"<<endl;
    cin>>y;
    cout<<"\n class B DATA ="<<y<<endl;
    obj.input_A();
}
int main()
{
    B objB;
    objB.input_B();

}
