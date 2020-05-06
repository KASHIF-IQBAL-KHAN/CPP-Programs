#include<iostream>
using namespace std;

class Student
 {
int roll;
 char name[50],course[20];
  public:
   void input()
    {
     cout<<"\nEnter Roll No : ";
       cin>>roll;
        cout<<"Enter Name : ";
          cin>>name;
            cout<<"Enter Course: ";
             cin>>course;
           }
           void display()
           {
             cout<<"\nStudent Details : \n";
             cout<<"Roll No\t: "<<roll;
              cout<<"\nName\t: "<<name;
                cout<<"\nCourse\t: "<<course;
              }
           };

class Exam : private Student
{
  int mark1,mark2,mark3;
 float per;
  public:
  void input_marks()
  {
  input();
   cout<<"\nEnter Marks :\n1st Subject : ";
     cin>>mark1;
     cout<<"2nd Subject : ";
       cin>>mark2;
        cout<<"3rd Subject : ";
           cin>>mark3;
       }
         void display_result()
          {

  display();
    per=(mark1+mark2+mark3)/3;
     cout<<"\n\nResult :\n1st Subject :"<<mark1<<"\n2nd Subject : "<<mark2<<"\n3rd Subject : "<<mark3<<"\n\nTotal : "<<mark1+mark2+mark3<<"\nPercentage : "<<per;
     cout<<"\n----------------------";
 }
 };

int main()
{
int NoS=5;
Exam st[NoS];
for(int i=0;i<NoS;i++)
 {
   st[i].input_marks();
 }
   for(int i=0;i<NoS;i++)
    {
      st[i].display_result();
   }
}
