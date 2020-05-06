#include<iostream>
using namespace std;
class subject
{
private:
    int marks1;
    int marks2;
    int marks3;
public:
    subject(int marks1,int marks2,int marks3)
    {
        this->marks1=marks1;
        this->marks2=marks2;//this pointer
        this->marks3=marks3;
    }
    void fun()
    {
    marks1<marks2&&marks1<marks3?cout<<marks1<<" is least":marks2<marks3?cout<<marks2<<" is least":cout<<marks3<<" is least";//ternary operator
    }
};
    int main()
{
    subject s(10,56,55);
    s.fun();
    return 0;
}
