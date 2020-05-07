#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class polygon
{
protected:
    double width;
    double height;
public:
    void set_value(double w,double h)
    {
        width=abs(w);
        height=abs(h);
    }
    virtual void calculate_area()=0;  //pure virtual function.mandatory for derived classes to include this class otherwise they will become abstract ..this class is also an abstract you cant create object of this class but you can make pointer of it.
};
class Rectangle:public polygon
{
    void calculate_area()
    {
    cout<<"Area of rectangle is :"<<width*height<<endl;
    }
};
class Triangle:public polygon
{
    void calculate_area()
    {
    cout<<"\nArea of triangle is :"<<setprecision(2)<<fixed<<0.5*width*height<<endl;
    }
};
int main()
{
    polygon *p=new Rectangle();  //base class pointer derived class object       /*Rectangle r;  polygon *p; p=&r */
    p->set_value(10,8);
    p->calculate_area();        //polymorphism 1
    p=new Triangle();
    p->set_value(50.44,10);
    p->calculate_area();        //polymorphism 2 same statement but different function calling
    return 0;
}
