#include <iostream>
using namespace std;
class Student   //abstract class(you can't make simple object of abstract class but make it with the help of pointer)
{
protected:
    int x=5;
public:
    virtual void get()=0;
    virtual void display()=0;   //compulsory to put this function in all the derived classes
};
class Engineering:public Student
{
    void get()
    {
    x+=5;
    }

    void display()
    {
    cout<<"\nValue of x is : "<<x;
    cout<<" . Class is engineering\n";
    }

};
class Medicine:public Student
{
    void get()
    {
    x+=10;
    }

    void display()
    {
        cout<<"\nValue of x is : "<<x;
        cout<<" . Class is medicine\n";
    }

};
class Science:public Student
{
    void get()
    {
    x+=15;
    }

    void display()
    {
        cout<<"\nValue of x is : "<<x;
        cout<<" . Class is science\n";
    }
};
int main()
{
Student *s[3];
for(int i=0;i<3;i++)
{
    if(i==0)
    s[i]=new Engineering();
    else if(i==1)
    s[i]=new Medicine();
    else
    s[i]=new Science();

    s[i]->get();
    s[i]->display();
}
return 0;
}
