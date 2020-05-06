#include<iostream>
using namespace std;
class Distance
{
private:
    float feet;
    float inches;
public:
    Distance() //default constructor
    {
        feet=0;
        inches=0;
    }
    Distance(float a,float b) //parameterized constructor
    {
        feet=a;
        inches=b;
    }
    void getdata()
    {
        cout<<"Enter feet"<<endl;
            cin>>feet;
        cout<<"Enter inches"<<endl;
        cin>>inches;
    }
    void show()
    {
        cout<<"The feet is : "<<feet<<" and inches is "<<inches<<endl;
    }
    void operator<(Distance dis)
    {
        if((feet==dis.feet)&&(inches==dis.inches))
        cout<<"Both distance in feet and inch are equal"<<endl;
        else
        cout<<"Not Equal"<<endl;
    }
    void operator+=(Distance dis)
    {
        if((feet==dis.feet)&&(inches==dis.inches))
        feet=feet+1;
        else
        inches=inches+1;
    }
};
int main()
{
    Distance d1,d2,d3;          //1 feet =12 inches
    d1.getdata();                //getdata
    d2.getdata();
    d1<d2;
    d1.show();               //d1.operator<(d2);    //operator overloading;;
    d1+=d2;
    d1.show();          //+=overloaded operator
    d2.show();
    return 0;
}
