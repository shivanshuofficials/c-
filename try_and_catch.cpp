#include <iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int no;

try
{
    cout<<"\n enter  value no";
    cin>>no;
    if (no>0)
    throw(1);
    else if(no < 0)
    throw('a');
else if(no==0)
throw(0.0);
}
catch(int i)
{
    cout<<"\n number is positive ";

}
catch(char p)
{cout<<"\n number is negative";

}
catch(float m)
{
    cout<<"\n number is natral";

}
getch();

}