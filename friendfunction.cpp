#include<iostream>
#include<conio.h>
using namespace std;
class two;
class one {
    int no1;
    public:
    void read()
    {
        cout<<"\n enter the value of no1:";
        cin>>no1;
    }
    friend void sum(one,two);
};
 class two {
    int no2;
    public:
    void read()
    {
        cout<<"\n enter the value of no2:";
        cin>>no2;
    }
    friend void sum(one,two);
 };
 void sum(one a,two b)
 {
    int total = 0;
    total = a.no1 + b.no2;
    cout<<"\n sum of no1 and no2:"<<total;
 }

int main()
{
    one p;
    two q;
    p.read();
    q.read();
    sum(p,q);
    getch();
}