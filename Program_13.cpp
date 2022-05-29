// Write a program to show multilevel inheritance
#include <iostream>
using namespace std;
//Base class
class Vehicle
{
    protected:
    //constructor
    Vehicle(){
        cout<<"\tThis is a vehicle."<<endl;
    }
};
// Simple Inheritance
class fourwheeler:public Vehicle{
    public:
    int num_wheels = 4;
    fourwheeler(){ // constructor
        cout<<"\tObj of fourwheeler  vehicle."<<endl;

    }
};
// Multilevel Inheritance
class car:public fourwheeler{
    public:
    string model;
    car(){ // constructor
        cout<<"\tcar has four wheel."<<endl;
    }
    // function to display car details
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