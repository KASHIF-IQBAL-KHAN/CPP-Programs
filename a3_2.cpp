#include<iostream>
using namespace std;
class checkprime
{
private:
    int number;
public:
    checkprime(int a=0)
    {
     setnumber(a);
    }
    void setnumber(int a)
    {
        if(a>0)
        number=a;
        else
        number=0;
    }
     void operator--()
    {
        int count=0;
        for(int i=2;i<=number/2;i++)
        {
            if((number%i)==0)
            count+=1;
        }
        if(count>0)
        cout<<"Not a prime no.";
        else
        cout<<"Yes it's1 a Prime No";
    }
};
int main()
{
    int num;
    cout<<"Enter no to check even or odd:";
    cin>>num;
    checkprime cp(num);
    --cp;
return 0;
}
