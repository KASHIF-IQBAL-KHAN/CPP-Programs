#include<iostream>
using namespace std;

class Number
 {
 int num;
public:
void getNum()
{
  cin>>num;
  }
  void disNum()
   {
   cout<<num;
 }
 void operator !(void)
  {
  if(num%2==0)
    cout<<"Number is Even.";
      else    cout<<"Number is Odd.";
   }
};
int main()
{
Number num;
 cout<<"Enter Number : ";
  num.getNum();
  !num; 
  return 0;
}
