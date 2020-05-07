#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
protected:
    string name;
    string rollno;
public:
    void get_details()
    {
        cout<<"\nEnter name of student : "<<endl;getline(cin,name);

            cout<<"Enter roll no of "<<name<<" : "<<endl;getline(cin,rollno);
    }
    void display_details()
    {
        cout<<"\nName is : "<<name<<endl;
        cout<<"Roll No is : "<<rollno<<endl;
    }
};
class Examination:virtual public Student
{
protected:
    float test1,test2;
    float avg;
public:
    void get_detail()
    {
        cout<<"Enter the marks in test1 "<<endl;cin>>test1;

            cout<<"Enter the marks in test2 "<<endl;cin>>test2;
    }
    void cal_average()
    {
        avg=(test1+test2)/2;
    }
    void display_average()
    {
        cout<<"Average Marks of "<<name<<" from test1 and test2 is : "<<setprecision(2)<<fixed<<avg<<endl;
    }
};
class Extracurricular:virtual public Student
{
protected:
    int painting, music;
public:
    void get_score()
    {
            cout<<"Enter the marks of music : "<<endl;cin>>music;

                    cout<<"Enter the marks of painting : "<<endl;cin>>painting;
    }
    void display_total()
    {
    cout<<"Total narks from painting and music is : "<<music+painting<<endl;
    }
};
class Result:public Examination,public Extracurricular
{
protected:
    int total;
    float per;
public:
    void cal_total()
    {
        total=test1+test2+painting+music;
        per=total/4;
    }
    void comment()
    {
        cout<<"Total Marks of all subjects is : "<<total<<endl;
        (per>50)?cout<<"\n Status is - Passed":cout<<"\nStatus is - Failed"<<endl;

    }
};
int main()
{
Result r;
        r.get_details();
        r.Examination::get_detail();
        r.Examination::cal_average();
        r.Extracurricular::get_score();
        r.Examination::display_average();
        r.Extracurricular::display_total();

    r.cal_total();
    r.comment();
    return 0;
}
