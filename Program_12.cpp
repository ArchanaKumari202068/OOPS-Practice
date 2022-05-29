// Write a program to show multiple inheritance
#include <iostream>
using namespace std;

class Mother{
    public:
    string colour;
    //function to set colour property
    void func1(string black){
        colour=black;
    }
    void display(){
        cout<<"Hair color is "<<colour<<endl;
    }
    };
    
  class Father{
    public:
    string type;
    //function to set type property
    void func2(string curly){
      type =curly;
    }
    void display(){
        cout<<"Hair type is "<<type<<endl;
    }
};
//multiple inheritance
class Child:public Mother, public Father{
    public:
    //function to set both the inherited properties 
    void func3(string curly,string clr){
      type  =curly;
      colour = clr;
    }
    // function to display both type and color
    void display(){
        cout<<"Hair type is "<<type<<endl<<"And colour is "<<colour<<endl;
    }
};
  
int main()
{
    Child c1;
    // setting both the properties using functions
    c1.func1("black");
    c1.func2("straight");
    // displaying them
    c1.display();


    return 0;
}