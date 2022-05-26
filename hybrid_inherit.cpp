#include <iostream>
using namespace std;

class Vehicle{
    public:
    Vehicle(){
        cout<<"\n\tThis is the vehicle"<<endl;
    }
};
class Fare{
    public:
    Fare(){
        cout<<"\n\tFare of the Vehicle\n"<<endl;
    }
};
class Bus:public Vehicle{
    
};
class Car:public Vehicle,public Fare{
    
};
int main(){
    Car obj2;
    return 0;
}
