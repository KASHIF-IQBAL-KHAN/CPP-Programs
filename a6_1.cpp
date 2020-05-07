#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    float c;

    try         //try block
    {
        cout<<"Enter first numbers"<<endl;
        cin>>a;

        if(cin.fail())
        throw(a);           //throw
        cin.clear();
        cout<<"Enter second numbers"<<endl;
        cin>>b;

        if(cin.fail())
        throw(b);

        if(b==0)
        throw 1.5f;    //1.5f means it's float otherwise only 1.5 will be considered by compiler as double.

        c=a/b;
        cout<<setprecision(2)<<fixed<<"Division is : "<<c<<endl;
    }
    catch(int a)        //catch block
    {
        cout<<"Please enter only integer value for eg. 21 , 32 etc: "<<endl;
    }
    catch(float a) //catch block
    {
        cout<<"Dont input zero in b.Division by zero leads to infinite."<<endl;
    }
    return 0;
}
