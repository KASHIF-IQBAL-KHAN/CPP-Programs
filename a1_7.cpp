#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
class student{
private:
	int rollno;
	float marks1, marks2, marks3, total, average;
	string name;
	public:
	void getdata();
	void displaydata();
};
	void student::getdata()
	{
		cout << endl << endl << "Enter name of student :\t";
		cin.ignore();
		getline(cin, name);
		cout << endl << "Enter " << name << "'s rollno :\t";
		cin >> rollno;
		cout << endl << "Enter " << name << "'s marks ( M1,,M2,M3 ) :\t";
		cin >> marks1 >> marks2 >> marks3;

		total = marks1 + marks2 + marks3 ;
		average = total / 3;
	}

	void student::displaydata()
	{
		cout << endl << "Name = " << name << endl << "Roll no = " << rollno << endl << "Marks1 = " << marks1 << endl <<
		"Marks2 = " << marks2 << endl << "Marks3 = "<< marks3 << endl << "Total = " << total << endl << "Average = " << average << endl;
	}
int main()
{
	int n, i;
	cout << "Enter no of students:\t";
	cin >> n;
	student s[n];	//array of objects
	for( i = 0 ; i < n ; i++)
	 s[i].getdata();
	for( i = 0 ; i < n ; i++)
	 s[i].displaydata();
	return 0;
}
