#include<iostream>

using namespace std;

inline int largest(int x, int y, int z)	//inline function
{555445555
	int result;
 	return result=(x>y)&&(x>z)?x:(y>z)?y:z;			//ternary operator
}

int main()
{
	int x, y, z;

	cout << endl << "Enter value of x: ";
	cin >> x;

	cout << endl << "Enter value of y: ";
	cin >> y;

	cout << endl << "Enter value of z: ";
	cin >> z;

	cout << endl << "Largest = " << largest(x, y, z);

	return 0;
}
