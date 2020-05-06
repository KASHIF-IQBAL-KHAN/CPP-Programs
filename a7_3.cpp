#include<iostream>
using namespace std;

template<class T>   //this template class and function can handle all type of data i.e. int,float etc .//defining a class T of type template
class array
{
protected:
    T *a,size;
public:
array(int size)    //parameterized constructor with default arguments
{
    this->size=size;
    a=new T[size];  //dynamic memory allocation in heap memory
    for(int i=0;i<size;i++)
    {
        cout<<"Enter number "<<i+1<<" : ";
        cin>>a[i];
    }
}
void calculate();    //throw(int) is optional
void display();     //member function
};


template<class T>
void array<T>::calculate()    //call using scope resolution operator .//Throw int is optional
{
            for(int i=0;i<size-1;i++)
            {
                T temp;
                for(int j=i+1;j<=size-1;j++)
                {
                    if(*(a+i)>*(a+j))
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }
}


template<class T>
void array<T>::display()  //call using scope resolution operator
{
    cout<<"\nAscending order  is  : \n"<<endl;
    for(int i=0;i<size;i++)
    cout<<*(a+i)<<" , ";
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of array  : ";cin>>n;

//Integer type

cout<<"Enter values of type integer :"<<endl;
  array<int> a(n);   //first object of int type. n is size.
    a.calculate();
    a.display();

//float type
    cout<<"\nEnter values of type float :"<<endl;
    array<float> a1(n);   //second object of float type. n is size.
    a1.calculate();
    a1.display();

    return 0;
}
