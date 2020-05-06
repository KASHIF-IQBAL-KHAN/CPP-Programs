#include<iostream>
using namespace std;
class count
{
protected:
int c;
public:
    count()
    {
    c=10;
    }
    count(int x)
    {
        c=x;
    }

    void operator++()  //operator overloading
    {
        c+=1;
    }
    int back()
    {
        return c;
    }
};
class counter:public count
{
public:
    counter():count(){}  //access value from base class constructor from derived class constructor
    void operator--()   //operator overloading
    {
        c-=1;
    }
    int back()
    {
        return c;
    }

};
int main()
{
    count c;
    counter c1;
    cout<<"Initial Value is : "<<c1.count::back();
    ++c1;


    cout<<"\n\nValue after ++ operator overloading is "<<c1.count::back();
    --c1;


    cout<<"\n\nValue of -- operator overloading is "<<c1.back();
    return 0;
}
