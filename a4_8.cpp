#include<iostream>
#include<string.h>
using namespace std;
class Student
{
protected:
    string name;
    string rollno;
public:
     void get()
     {
         cin.ignore();
         while(1)
         {
             cout<<"Enter name of the student : ";getline(cin,name);
             if(!((name[0]>='a'&&name[0]<='z')||(name[0]>='A'&&name[0]<'Z')||(name[0]=='_')))
             cout<<"Invalid entry.Try again!";
             else
             break;
         }
         while(1)
         {
             cout<<"Enter roll no the student : ";getline(cin,rollno);
             if(!((rollno[0]>='a'&&rollno[0]<='z')||(rollno[0]>='A'&&rollno[0]<'Z')||(rollno[0]=='_')||(rollno[0]>='0'&&rollno[0]<='9')))
             cout<<"Invalid entry.Try again!";
             else
             break;
             }

     }
     void display()
     {
          cout<<name<<"\t"<<rollno<<"\t";
     }
};
class Mark:public Student
{
protected:
    int marks1;
    int marks2;
public:
    void get()
    {

        do
        {
            cout<<"Marks in English in 50 : ";cin>>marks1;
            if(marks1>50){cout<<"Enter marks less than 50.";}
        } while(marks1>50);
        do
        {
        cout<<"Marks in Maths in 50 : ";cin>>marks2;
        if(marks2>50){cout<<"Enter marks less than 50.";}
    } while(marks2>50);
    }
    void display()
    {
        cout<<marks1<<"\t\t"<<marks2<<"\t";
    }
};
class Result:public Mark
{
private:
    int total;
public:
    void get()
    {
    this->total=(marks1+marks2);
    }
    void display()
    {
        (this->total>70)?cout<<"\tPassed"<<endl:cout<<"\tFailed"<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter how many students : ";cin>>n;
    Result r[n];
    for(int i = 0;i < n;i++)
    {
        r[i].Student::get();
        r[i].Mark::get();
        r[i].get();
    }
    cout<<"Name"<<"\t\tR_No."<<"\t\tEnglish"<<"\t\tMaths"<<"\t\tResult"<<endl;
    for(int i=1;i<9;i++){cout<<"---------";}cout<<endl;
    for(int i = 0;i < n;i++)
    {
        r[i].Student::display();
        r[i].Mark::display();
        r[i].display();
    }
return 0;
}
