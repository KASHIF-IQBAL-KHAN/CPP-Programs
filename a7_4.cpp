#include<iostream>
using namespace std;
template<class T>   //this template class and function can handle all type of data.
class largest:exception     //inbuilt class exception
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
    cout<<"\nLargest Number is : "<<large_no<<endl<<endl;
}

int main()
{
    largest<float> l(5.544,3333.4,833.7);   //first object of float type
    l.calculate();
    l.display();

    largest<int> l1(86,60,55);  //second object of int type
    l1.calculate();
    l1.display();
    return 0;
}
