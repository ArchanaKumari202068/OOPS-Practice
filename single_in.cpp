#include <iostream>
using namespace std;
class University{
    public:
    string Name;
    University(string nm)
    {
        Name=nm;
        cout<< "University Name :"<<Name<<endl;
    }

};
class Dept: public University{
    public:
    string Department;
    string course;

    Dept(string nm, string dpt, string C1):University(nm)
    {
        
        Department=dpt;
        course=C1;
        cout<<"DEPARTMENT: "<<Department<<endl;
        cout<<"Course: "<<course<<endl;
    }
};
int main(){
    Dept obj("CUH","B.TECH","CSE");
    
    return 0;
}