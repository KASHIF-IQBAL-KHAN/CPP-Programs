#include<iostream>
#include<string.h>
using namespace std;
class newstring
{
    char st1[30],st2[30];
public:
newstring(char str1[],char str2[])
{
strcpy(this->st1,str1);

strcpy(this->st2,str2);
}
void operator+()
{
    cout<<strcat(st1,st2)<<endl;
}
};
int main()
{
    char c1[]="Kashif ";
    char c2[]="Iqbal";
    newstring n1(c1,c2);
    +n1;        //overloading + operator
    return 0;
}
