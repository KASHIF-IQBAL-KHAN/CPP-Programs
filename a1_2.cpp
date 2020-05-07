#include<iostream>
#include<iomanip>
using namespace std;
class TIME
{
	int hh, mm, ss;
	unsigned long int seconds;

    inline void gettotalsec(){ seconds = hh * 3600 + mm * 60 + ss; }

	public:

	void getdata()
	{
	 cout<<"\nEnter Time (HH:MM:SS):\t";
	 scanf("%d %*c %d %*c %d", &hh,&mm,&ss);
	}

	void putdata()
	{
	 gettotalsec();
	 cout<< endl <<"Time = " << setw(2) << setfill('0') << hh << ":" << setw(2) << setfill('0') << mm << ":" << setw(2) << setfill('0') << ss;
	 cout<< endl << endl <<"Total Seconds = " << seconds;
	}
};

int main()
{
	TIME t1;

	t1.getdata();
	t1.putdata();

	return 0;
}
