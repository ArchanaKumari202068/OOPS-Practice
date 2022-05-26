#include <iostream>
using namespace std;
//Base class
class Vehicle
{
    protected:
    Vehicle(){
        cout<<"\n\tThis is a vehicle."<<endl;
    }
};
class fourwheeler:public Vehicle{
    public:
    int num_wheels = 4;
    fourwheeler(){
        cout<<"\n\tObj with fourwheeler are vehicle."<<endl;

    }
};
class car:public fourwheeler{
    public:
    string model;
    car(){
        cout<<"\n\tcar has four wheel."<<endl;
    }
    void display(){
        cout<<"Model: "<<model<<endl;
        cout<<"Wheels: "<<num_wheels<<endl;
    }
};
int main(){
    car obj;
    obj.model = "Maruthi Suzuki";
    obj.display();

    return 0;
}