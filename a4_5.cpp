#include<iostream>
#include<string.h>
using namespace std;
class User
{
public:
    int age;
    string name;
public:

    User(string name,int age) //base class constructor
    {
        this->name=name;
        this->age=age;
    }

    void display()
    {
        cout<<"\nName is : "<<name<<"\nAge is "<<age<<endl;
    }
};
class student:public User
{
    string course,rollno;
    int marks;
public:
    student(string name,int age):User(name,age){}   //calling base class constructor into derived class

    void getdata()
    {
        while(1)
        {
        cout<<"Enter course"<<endl;cin>>course;
        if(!((course[0]>='a'&&course[0]<='z')||(course[0]>='A'&&course[0]<='Z')))
            cout<<"Enter Alphabets.Try again!";
        else
        break;
        }

        cout<<"Enter rollno"<<endl;cin>>rollno;
        while(1)
        {
        cout<<"Enter marks"<<endl;cin>>marks;
        if(marks>100)
        cout<<"Please enter marks upto 100"<<endl;
        else
        break;
        }
    }

    void display()
    {
        cout<<"Course is : "<<course<<"\nRoll_No is : "<<rollno<<"\nMarks is : "<<marks<<endl;
    }

};

class Teacher:public User
{
public:
    int subject_assigned;
    int contact_hour;
public:
    Teacher(string name,int age):User(name,age){}  //calling base class constructor ito derived class
    void getdata()
    {
        while(1)
        {
        cout<<"Enter Subject Assigned upto 10 : ";cin>>subject_assigned;
        if(!((subject_assigned>0)&&(subject_assigned<10)))
        cout<<"Please enter an integer value from 0 to 10";
        else
        break;
        }

        while(1)
        {
        cout<<"Enter Contact Hours"<<endl;cin>>contact_hour;
        if(contact_hour>30)
        cout<<"Please assign upto 30.Try Again!";
        else
        break;
    }
}
    void display()
    {
    cout<<"Subject Assigned is "<<subject_assigned<<"\nContact Hours is "<<contact_hour<<endl;
    }
};


int main()
{
    string name;int age;

    while(1)
    {
    cout<<"Enter name of student : ";getline(cin,name);
    if((name[0]>='A'&&name[0]<='Z')||(name[0]>='a'&&name[0]<='z'))
    break;
    else
    cout<<"Please enter a valid alphabetical name : "<<endl;
    }


    cout<<"Enter age of student  : ";cin>>age;

    student s(name,age);
    s.getdata();
    cin.ignore();


    while(1)
    {
    cout<<"Enter name of teacher : \n";getline(cin,name);
    if((name[0]>='A'&&name[0]<='Z')||(name[0]>='a'&&name[0]<='z'))
    break;
    else
    cout<<"Please enter a valid alphabetical name : "<<endl;
    }

    cout<<"Enter age of teacher : ";cin>>age;

    cin.ignore();

    Teacher t(name,age);
    t.getdata();

    s.User::display();
    s.display();

    t.User::display();
    t.display();

    return 0;
}
