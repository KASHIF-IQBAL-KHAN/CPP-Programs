#include<iostream>
using namespace std;
class Railway_Time  //destination class i.e class to which another class to be converted
{
public:
    int hours;
    int minutes;
public:
    Railway_Time() //default constructor
    {
        hours=0;
        minutes=0;
    }
    Railway_Time(int a,int b) //parameterized constructor
    {
        hours=a;
        minutes=b;
    }
    void getdata()
    {
        cout<<"Enter hours"<<endl;
            cin>>hours;
        cout<<"Enter minutes"<<endl;
        cin>>minutes;
        if((hours>23)||(minutes>59))
        {
            cout<<"PLease enter the value in range i.e.23:59.Try Again!"<<endl;
            getdata();
        }
    }
};
class Civil_Time        //source class
{
public:
    int newhours;
    int newminutes;
public:
    void operator=(Railway_Time r)  //it's for the conversion of class civil to class railway done by using operator overloading
    {
        if(r.hours>12)
        {
            newhours=r.hours-12;
            newminutes=r.minutes;
            cout<<newhours<<":"<<newminutes<<" P.M"<<endl;
        }
        else
        {
            newhours=r.hours;
            newminutes=r.minutes;
            cout<<newhours<<":"<<newminutes<<" A.M"<<endl;
        }
    }
};
int main()
{
    Railway_Time r1;
    r1.getdata();               //getdata
    Civil_Time c;
    c=r1;       //class type conversion using operator overloading
    return 0;
}
