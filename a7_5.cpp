#include<iostream>
#include<math.h>
using namespace std;
template<class T>       //defining a class T of type template
class power:exception    //inbuilt class exception
{
public:
    T x,y;

power(T x,T y)
{
    this->x=x;
    this->y=y;
}
void check();
void display();
};
template<class T>        //You should declare again because this template<class T> because its scope is inside that block only.
void power<T>::check()  //calling outside using scope resolution operator
{
    try
    {
        if(ceil(y)!=floor(y))
        throw 1;
        cout<<pow(x,y)<<endl;
    }
    catch(...)   //  ...called  as ellipses,also known as universal catch.
    {
        cout<<"Please enter only integer value : "<<endl;
    }
}

int main()
{
    cout<<"\nOutput of first object"<<endl;
    power<float> p(2,3.6);          //if you pass any float value in y then error will occur . x can be int or float both.
    p.check();

    cout<<"\nOutput of second object"<<endl;
    power<int> p1(3,4);
    p1.check();
    return 0;
}
