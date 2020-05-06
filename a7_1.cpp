#include<iostream>
using namespace std;
template<class T>   //this template class and function can handle all type of data.
class largest:exception
{
protected:
    T x,y,z,large_no;
public:
largest(T x=0,T y=0,T z=0)    //parameterized constructor with default arguments
{
    this->x=x;
    this->y=y;
    this->z=z;
}

void calculate()throw(int);     //throw(int) is optional
void display();
};

template<class T>
void largest<T>::calculate()throw(int)    //call using scope resolution operator .//Throw int is optional
{
    try         //try block
    {
        if(x<0||y<0||z<0)
        throw 1;
        large_no=(x>y&&x>z)?x:y>z?y:z;  //ternary operator
    }
    catch (int k)           //catch block
    {
        cout<<"Dont enter negative values  in x , y and z,otherwise in largest number zero will be printed.\n\n";
    }
}

template<class T>
void largest<T>::display()  //call using scope resolution operator
{
    cout<<"Largest Number is : "<<large_no<<endl<<endl;
}

int main()
{

    largest<int> l(6,60,55);  //object of int type
    l.calculate();
    l.display();
    return 0;
}
