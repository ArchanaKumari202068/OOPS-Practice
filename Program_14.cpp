// Write a program to show hybrid inheritance
#include <iostream>
using namespace std;
// Base class
class Vehicle{
    public:
    int no_of_wheels;
    string name;

    Vehicle(int num,string nm){ // Parametrized constructor
        no_of_wheels=num;
        name=nm;
        
    }
};
class Transport{

    public:
    int price; 
    int fuel;
    Transport(int pr){
        price=pr;
      
    }
};
// Bus inheriting from vehicle
class Bus:public Vehicle{
    public:
      Bus(int num, string nm):Vehicle(num,nm){ //Constructor
            cout<<"Vehicle name: "<<name<<endl;
            cout<<"no_of_wheels: "<<no_of_wheels<<endl;
      }

    
    
};
// Multiple Inheritence
class Car:public Vehicle,public Transport{
    public:
    Car(int num, string nm,int price):Vehicle(4,nm),Transport(price){ //Constructor
            cout<<"Vehicle name: "<<name<<endl;
            cout<<"no_of_wheels: "<<no_of_wheels<<endl;
      }
    
};
int main(){
    Car obj2(4,"bmw",100000);
    Bus obj3(8,"Bus");
    return 0;
}
