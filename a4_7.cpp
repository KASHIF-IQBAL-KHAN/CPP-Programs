#include<iostream>
#include<string>
using  namespace std;
 class student
 {
 protected:
string rollno;
string name;
public:
    void get()
    {
        cout<<"Enter Name -"<<endl;cin>>name;
        cout<<"Enter Roll No - "<<endl;cin>>rollno;
    }
    void display()
    {
            cout<<name<<"\t"<<rollno<<"\t";
    }
};
class mark:public student
{
protected:
    int marks1,marks2;
public:
    void get_marks()
    {
        cout<<"Enter Marks in English in 50"<<endl;
        cin>>marks1;
        cout<<"Enter Marks in Maths in 50"<<endl;
        cin>>marks2;
    }
    void display_marks()
    {
        cout<<"\t"<<marks1<<"\t"<<marks2;
    }
};
class Result:public mark
{
    int total;
public:
    void cal_result()
    {
            total=marks1+marks2;
    }
    void display_result()
    {
            cal_result();
        cout<<name;
        cout<<"\t"<<rollno;
        display_marks();
        (total>70)?cout<<"\tPassed"<<endl:cout<<"\tFailed"<<endl;
    }
};
 int main()
 {
     int n;
     cout<<"How many students?";cin>>n;
     Result r[n];
     for(int i=0;i<n;i++)
     {
         r[i].get();
         r[i].get_marks();
     }
     cout<<"Name"<<"\tR_No."<<"\tEnglish"<<"\tMaths"<<"\tResult"<<endl;
     for(int i=1;i<9;i++){cout<<"-----";}cout<<endl;
    for(int i=0;i<n;i++)
    {
        r[i].display_result();
    }
     return 0;
 }
