#include<iostream>
#include<stdio.h>
using namespace std;
class TIME {
  int hours;
	int minutes;
	public:
	void input();
	void gettime(int, int);
	void sum(TIME, TIME);
	void display();
};
	void TIME::input() //using scope resolution operator to call the declared function outside of the class.
	{
		int h, m;
		cout<< endl << "Enter time ( hh : mm ):\t";
        while(1)
       {
		scanf("%d %*c %d", &h, &m);
        if(h>23||m>59)
        {
        cout<<"PLease enter value of hours and minutes upto 23:59"<<endl;
        }
        else
        {
		gettime(h,m);
        break;
        }
	   }
    }

	void TIME::gettime(int h, int m)
	{
		hours = h;
		minutes = m;
	}

	void TIME::sum(TIME t1, TIME t2)
	{
	  hours = t1.hours + t2.hours;

	  if( t1.minutes + t2.minutes >= 60 )
	  {
		 hours += ( t1.minutes + t2.minutes ) / 60;
		 minutes =  ( t1.minutes + t2.minutes ) % 60;
	  }
	  else
	    minutes = t1.minutes + t2.minutes;
	}

	void TIME::display()
	{
      cout << hours << " : " << minutes;
	}

int main()
{
	TIME t1, t2, t3;

	t1.input();
	t2.input();

	t3.sum(t1,t2);

	cout << endl << "T1 = ";
	t1.display();
	cout << endl << "T2 = ";
	t2.display();
	cout << endl << "Sum = ";
	t3.display();

	return 0;
}
