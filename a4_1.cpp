#include<iostream>
#include<string>
using  namespace std;
 class student
 {
string rollno;
string name;
string course;
public:
    void input_student()
    {
        cout<<"Enter Roll No - "<<endl;cin>>rollno;
        cout<<"Enter Name -"<<endl;cin.ignore();cin>>name;

        cout<<"Enter course -"<<endl;cin.ignore();cin>>course;
    }
    void display_student()
    {
            cout<<rollno<<"\t"<<name<<"\t"<<course<<"\t";
    }
};
class exam:public student
{
    int marks1,marks2,marks3;
public:
    void input_marks()
    {
        cout<<"Enter Marks1,Marks2,Marks3"<<endl;
        cin.ignore();cin>>marks1>>marks2>>marks3;
    }
    void display_result()
    {
            display_student();
            cout<<marks1<<","<<marks2<<","<<marks3<<endl;
    }
};
 int main()
 {
     exam ex[5];
     for(int i=0;i<5;i++)
     {
         cout<<"Enter details of student "<<i+1<<endl;
         ex[i].input_student();
         ex[i].input_marks();
     }
     cout<<"R_No."<<"\tName"<<"\tCourse"<<"\tMarks"<<endl;
    for(int i=0;i<5;i++)
    {
        ex[i].display_result();
    }
     return 0;
 }
