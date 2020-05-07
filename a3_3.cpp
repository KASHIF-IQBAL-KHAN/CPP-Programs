#include<iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;
public:
    complex(int a=0,int b=0)
    {
        real=a;
        img=b;
    }
    complex add(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    void display()
    {
        cout<<"The Addition of complex numbers are - "<<real<<"+i"<<img<<endl;
    }
    friend complex operator+(complex c1,complex c2);        //b= friend function

};
complex operator+(complex c1,complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main()
{cout<<"Answer of both questions a and b will be \n"<<endl;
    complex c1(4,5),c2(6,8),c3,c4;
    c3=c1+c2;           //operator overloading
    c3.display();
    c4=c1.add(c2);  //via member function
    c4.display();
return 0;
}
