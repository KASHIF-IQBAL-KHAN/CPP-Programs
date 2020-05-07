#include<iostream>
#include<string>
using  namespace std;
 class University
{
    protected:
    string university,department,person;
public:
    void getdata()
    {
        cout<<"Enter the name of University\n";getline(cin,university);

        cout<<"Enter the name of department\n";getline(cin,department);

        cout<<"Enter the name of person : \n";getline(cin,person);
    }
    void display()
    {
        cout<<"\nUniversity name is : "<<university<<"\nDepartment name is :"<<department<<"\nPerson name is "<<person<<endl;
    }
};
class Company
{
protected:
 string n_comp;
 int n_eng;
 long amt_comp;
public:
void getdata()
{
    cout<<"Enter the name of Company";getline(cin,n_comp);

    cout<<"Enter the number of engineers assigned to complete the project\n";cin>>n_eng;
    cout<<"Enter the amount assigned by company \n";cin>>amt_comp;

}
 void display()
 {
     cout<<"\nName of company is : "<<n_comp<<"\nNumber of engineers assigned is : "<<n_eng<<endl;
 }
};
class Project:public University,public Company
{
protected:
    string type_proj;
    long duration_proj,amount_complete;
public:
    void getdata()
    {
        cin.ignore();
    cout<<"Enter the type of project : \n";getline(cin,type_proj);
    cout<<"Enter duration of project \n";cin>>duration_proj;
    cout<<"Enter the amount granted to complete the project : \n";cin>>amount_complete;
    }
    void display()
    {
        cout<<"Type of project is : "<<type_proj<<" \nDuration of project is : "<<duration_proj<<"\nAmount assigned to complete the project is :"<<amount_complete<<endl;
    }
};

 int main()
 {
Project p;
     p.University::getdata();
     p.Company::getdata();
     p.getdata();
     p.University::display();
     p.Company::display();
     p.display();
     return 0;
 }
