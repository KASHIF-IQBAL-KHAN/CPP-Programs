#include<iostream>
using namespace std;
 class derived;
class base
{
private:
    int x=5;   //private data member
public:
    void display()  //private member function
    {
        cout<<"\nIn base class,value is "<<x<<endl;
    }
    friend derived;    //compiler will not recognize this line so we should declare it also.
};
class derived:public base  //derived class is a friend of base class
{
public:
void display()
{
    cout<<"\nIn derived class,value is "<<x<<endl; //x is private but accessible due to friendship
}
};
int main()
{
    derived d;
    d.base::display();
    d.display();
    return 0;
}
