#include<iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;
public:
    complex()   //no parameter
    {
        real=0;
        img=0;
    }
    complex(int a)      //one parameter
    {
        real=a;
        img=a;
    }
    complex(int a,int b)        //two parameters
    {
        real=a;
        img=b;
    }
    friend complex add(complex &c1,complex &c2);     //friend function to add two complex numbers
    friend void  display(complex c3);
};
  complex add(complex &c1,complex &c2)
   {
       complex temp;
       temp.real=c1.real+c2.real;
       temp.img=c1.img+c2.img;
       complex &b(temp);    //making b as areference variable
       return b;        //returning reference
   }
   void display(complex c3)
   {
       cout<<"The Addition of both complex number is : "<<c3.real<<"+i"<<c3.img<<endl;

   }
   int main()
   {
       complex c1(4,5);
       complex c2(8,9);
       complex c3;
       c3=add(c1,c2);       //Addition
       display(c3);             //display
       return 0;
   }
