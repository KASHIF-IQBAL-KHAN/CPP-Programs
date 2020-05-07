#include<iostream>
using namespace std;

class Staff{
	char code[10],name[30];
	public:
	void get_Staff()
	{
		cout<<"\nEnter Code : ";
		cin>>code;
		cout<<"Enter Name : ";
		cin>>name;
	}
	void display_Staff()
	{
		cout<<"\nEmployee Details :\nEmpCode : "<<code<<"\tName :"<<name;
	}
};

class Faculty : public Staff{
	char dept[20],sub_taken[30],re_area[30];
	public:
	void get_Faculty()
	{
		cout<<"Enter Department : ";
		cin>>dept;
		cout<<"Enter Subject Taken : ";
		cin>>sub_taken;
		cout<<"Enter Research Area : ";
		cin>>re_area;
	}
	void display_Faculty()
	{
		cout<<"\nDepartment : "<<dept<<"\nSubject Taken : "<<sub_taken<<"\nResearch Area : ";
	}
};

class Typist : public Staff{
	char office[30];
	int speed;
	public:
	void get_Typist()
	{
		cout<<"Enter Office : ";
		cin>>office;
		cout<<"Enter Speed : ";
		cin>>speed;
	}
	void display_Typist()
	{
		cout<<"\nOffice : "<<office<<"\nTyping Speed : "<<speed<<" WPM";
	}
};

class Officer : public Staff{
	char rank[30],grade[20];
	public:
	void get_Officer()
	{
		cout<<"Enter Rank : ";
		cin>>rank;
		cout<<"Enter Grade : ";
		cin>>grade;
	}
	void display_Officer()
	{
		cout<<"\nRank : "<<rank<<"\nGrade : "<<grade;
	}
};

class Permanent : public Typist{
	long sal;
	public:
	void get_Permanent()
	{
		cout<<"Enter Salary : ";
		cin>>sal;
	}
	void display_Permanent()
	{
		cout<<"\nSalary : "<<sal;
	}
};

class Casual : public Typist{
	int daily_wage;
	public:
	void get_Casual()
	{
		cout<<"Enter Daily Wage : ";
		cin>>daily_wage;
	}
	void display_Casual()
	{
		cout<<"\nDaily Wage : "<<daily_wage;
	}
};

int main()
{
	{
	Faculty f1;
	f1.get_Staff();
	f1.get_Faculty();
	f1.display_Staff();
	f1.display_Faculty();
	}
	{
	Permanent t1;
	t1.get_Staff();
	t1.get_Typist();
	t1.get_Permanent();
	t1.display_Staff();
	t1.display_Typist();
	t1.display_Permanent();
	}
	{
	Casual t2;
	t2.get_Staff();
	t2.get_Typist();
	t2.get_Casual();
	t2.display_Staff();
	t2.display_Typist();
	t2.display_Casual();
	}
	{
	Officer o1;
	o1.get_Staff();
	o1.get_Officer();
	o1.display_Staff();
	o1.display_Officer();
	}
    return 0;
}
