#include<iostream>
using namespace std;
 class base;  //NO.BASE CLASS CANT BE A FRIEND OF DERIVED CLASS
class base
{
private:
    void display()
    {
        cout<<"value is "<<x<<endl; //error-x is not accessible
    }
};
class derived:base  //derived class is a friend of base class
{
public:
        friend base;
private:
        int x=10;

};
int main()
{
    base b;
    b.display();
//derived d;
    //b.base::display();
    return 0;
}
//No the base class can't be a friend of derived class.
