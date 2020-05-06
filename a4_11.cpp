#include<iostream>
using namespace std;
class Base1;
class Base1
{
public:
    int x;
protected:
    int y;
private:
    int z;
public:
    void get()
    {
        cout<<"Enter the value of x , y and z"<<endl;
        cin>>x>>y>>z;
    }
};
class Base2
{
public:
        friend Base1; //base1 is a friend of base 2
    int a;
protected:
    int b;
private:
    int c;

public:
    void get()
    {
        cout<<"Enter the value of a , b and c"<<endl;
        cin>>a>>b>>c;
    }


};
class Derived:public Base1,public Base2
{
public:
    void display()
    {
    cout<<"Value of x is "<<x<<endl;
    cout<<"Value of y is "<<y<<endl;
    //cout<<"Value of z is "<<z<<endl;  //z is not accessible due to private member;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
    //cout<<"Value of c is "<<c<<endl; //c is not accessible due to private member

}
};
int main()
{
    Derived d;
    d.Base1::get();
    d.Base2::get();
    d.display();
    return 0;
}
