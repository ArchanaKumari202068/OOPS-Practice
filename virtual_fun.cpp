#include <iostream>
using namespace std;

class A{
    public:
    virtual void display(){
        cout<<"This is A class" <<endl;

    }
};
class B: public A{
    public:
    void display(){
    cout<<"this is B class" <<endl;
    }
};
int main(){
    A* a;
    B b;
    a =&b;
    a ->display();
    return 0;
}
