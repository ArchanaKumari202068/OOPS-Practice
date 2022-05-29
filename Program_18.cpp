#include <iostream>
using namespace std;
//base class 
class A{
    protected: //acess specifier
    string name; //data member
    int age;
    public:
    // function to set member variables
    void func_1(string nm,int ag){
        name=nm;
        age=ag;
 }
 // virtual function
    virtual void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"age :"<<age<<endl;

    }
};
class B: public A{
    public:
    int salary;
    string designation;
    public:
    // funtion to set data members
    void func_2(int sal,string desg){
        salary=sal;
        designation=desg;

    }
    void display(){
        A::display();
    cout<<"Salary: "<<salary<<endl;
    cout<<"Designation: "<<designation<<endl;
    }
};

int main(){
    int num = 3;
    int * p;
    p = &num;
    
    A* a;
    B b;
    b.func_1("ANSH",19);
    b.func_2(200000,"hod");
    a =&b;
    a ->display();
    return 0;
}