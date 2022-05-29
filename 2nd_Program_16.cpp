//Program to overload unary operator.
#include <iostream>
using namespace std;

class Add{
    int x,y;
    public:
    Add(){
        x=0;
        y=0;
    }
    Add(int a,int b){
        x=a;
        y=b;
    }
    Add operator ++()
{
    x++;
    y++;
    return Add(x,y);

}
void display(){
    cout<<"\nvalue of x "<<x<<endl;
    cout<<"value of y "<<y<<endl;
}

};

int main(){
    Add A(2,4);
    cout<<"value of x and y before increment";
    A.display();
    ++A;
    cout<<"value of x and y after increment";
    A.display();
    return 0;


}