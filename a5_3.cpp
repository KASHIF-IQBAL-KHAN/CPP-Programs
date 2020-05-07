#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class shape
{
protected:
    double radius,length,breadth,side1,side2,height;
public:
    virtual void calculate_area()=0;  //pure virtual function.mandatory for derived classes to include this class otherwise they will become abstract ..this class is also an abstract you cant create object of this class but you can make pointer of it.
    virtual void display_name()=0;
};
class Circle:public shape
{
    void calculate_area()
    {
        cout<<"Enter the radius to find area of Circle "<<endl;cin>>radius;
    cout<<"\nArea of circle is :"<<setprecision(2)<<fixed<<3.14*radius*radius<<endl;
    }
    void display_name()
    {
        cout<<" Circle"<<endl;
    }
};
class Rectangle:public shape
{
    void calculate_area()
    {
        cout<<"\nEnter the length of rectangle :"<<endl;cin>>length;cout<<"Enter the breadth of rectangle :"<<endl;cin>>breadth;
    cout<<"Area of rectangle is :"<<setprecision(2)<<fixed<<length*breadth<<endl;
    }
    void display_name()
    {
        cout<<" Rectangle"<<endl;
    }

};
class Trapezoid:public shape
{
    void calculate_area()
    {
        cout<<"\nEnter two parallel sides to find the area of trapezoid:"<<endl;cin>>side1>>side2;cout<<"Enter the height to find the area of trapezoid :"<<endl;cin>>height;
    cout<<"\nArea of trapezoid  is :"<<setprecision(2)<<fixed<<0.5*(side1+side2)*height<<endl;
    }
    void display_name()
    {
        cout<<" Trapezoid"<<endl;
    }
};

int main()
{
    shape *s=new Circle();          //Rectangle r;  polygon *p; p=&r//base class pointer derived class object
    s->calculate_area();        //polymorphism 1
    s->display_name();
    s=new Rectangle();
    s->calculate_area();        //polymorphism 2 same statement but different function calling
    s->display_name();
    s=new Trapezoid();
    s->calculate_area();     //polymorphism 1 //called run time polymorphism
    s->display_name();
    return 0;
}
