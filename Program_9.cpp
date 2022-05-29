/*Write a program to create an abstract class named Shape that contains an empty method
number of sides(). Provide three classes named Trapezoid, Triangle and Hexagon such that each
of the classes contains only the method number of Sides() that shows the number of sides in the given
Geometrical figure.*/
#include <iostream>
using namespace std;
class Shape{
    public:
    virtual int no_of_sides()=0;

};
class Trapezoid:public Shape{
public:
int no_of_sides(){
    return 4;
}

};
class Triangle:public Shape{
public:
int no_of_sides(){
    return 3;
}

};
class Hexagon:public Shape{
public:
int no_of_sides(){
    return 6;
}

};
void display(Shape * s){
    cout<<"Number of sides: "<<s->no_of_sides()<<endl;
}
int main (){
    Shape * s1 = new Trapezoid();
    Shape * s2 = new Hexagon();
    Shape * s3 = new Triangle();
    display(s1);
    display(s2);
    display(s3);    
}
