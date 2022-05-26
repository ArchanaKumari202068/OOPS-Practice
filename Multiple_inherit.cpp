#include <iostream>
using namespace std;
//1st base class
class Vehicle{
    public:
    Vehicle()
    {
        cout<<"This is a vehicle"<<endl;
    }
};
//2nd base class
class fourWheeler{
    public:
    fourWheeler(){
        cout<<"This is a fourWheeler"<<endl;
    }
};
// Sub classes: derived from two base class
class car : public Vehicle,public fourWheeler{


};
int main()
{
 
 car obj;
 return 0;
}