#include<iostream>
using  namespace std;
 class Distance
 {
     float feet;
     float inches;
     double metres;
public:
    void getdata()
    {
        cout<<"Enter feet"<<endl;
        cin>>feet;
            cout<<"Enter Inches"<<endl;
            cin>>inches;
    }
    void show()
    {
        cout<<"The given measurement is "<<feet<<" feet and "<<inches<<" inches"<<endl;
        metres=(double(feet)*0.3)+((double)inches*0.025);   //basic data type conversion
        cout<<endl<<"The final measurement is "<<metres<<" metres"<<endl;
    }
 };
 int main()
 {
     Distance d;
     d.getdata();
     d.show();
     return 0;
 }
