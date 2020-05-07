#include<iostream>
using namespace std;
class complex{
	int real;
	int img;
	public:
	void getdata();
	void putdata();
	void sum(complex,complex);
};
	void complex::getdata()
	{
		cout<< "Enter real part:\t";
		cin >> real;
		cout << "Enter imaginary part:\t";
		cin>>img;
	}
	void complex::putdata()
	{
		if( img == 0)
		 cout<< real;
		else if( real == 0)
		 cout<< img << "i";
		else if(img < 0)
		 cout<< real << img << "i";
		else
		 cout<< real << " + " << img << "i";
	}

	void complex::sum(complex c1, complex c2)
	{
		real = c1.real + c2.real;
		img = c1.img + c2.img;
	}
int main()
{
	complex c1, c2, c3;
	c1.getdata();
	c2.getdata();
	cout<< endl << "C1 = ";
	c1.putdata();
	cout<< endl << "\nC2 = ";
	c2.putdata();
	c3.sum(c1, c2);
	cout<< endl << "\n Final Addition is -> C1 + C2 = ";
	c3.putdata();
	return 0;
}
