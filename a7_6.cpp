#include<iostream>  //for returning,i am using throw there so float values will be received by catch block and print.
#include<math.h>
using namespace std;

template<class T>

class power:exception       //inbuilt class exception
{
public:
    T x,y,result;

power(T x,T y)
{
    this->x=x;
    this->y=y;
}
void check();
};

template<class T>   //You should declare again because this template<class T> because its scope is inside that block only.
void power<T>::check()      //calling outside using scope resolution operator
{
    try             //try block
    {
        if(ceil(x)!=floor(x)||ceil(y)!=floor(y))
        throw x,y;

        result=x/y;
        if(ceil(result)==floor(result))
        {
        cout<<result<<" is also integer"<<endl;
        }
    }
    catch(...)      //  ...called  as ellipses,also known as universal catch.
    {
        cout<<"Float values : "<<x<<" , "<<y<<endl;
    }

}

int main()
{
    //for Integer Case
    cout<<"\nOutput of first object : Integer Type.After division the below result is computed is also an integer : "<<endl;
    power<int> p(80,10);
    p.check();

    //for float Case
    cout<<"\nOutput of second object : Float type[Returning float values]"<<endl;
    power<float> p1(6.7,4.5);
    p1.check();
    return 0;
}
