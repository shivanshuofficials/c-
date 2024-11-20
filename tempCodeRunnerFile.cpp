#include <iostream>
using namespace std;
class two;
class one
{
    int no1;

public:
    void read()
    {
        cout << "enter the value :";
        cin >> no1;
    }
    friend void sum(one, two);
};
class two
{
    int b;

public:
    void read()
    {
        cout << "enter the 2nd value :";
        cin >> b;
    }
    friend void sum(one, two);
};
void sum(one p, two q)
{
    int total = 0;
    total = p.no1 + q.b;
    cout << total;
}
int main()
{
    one c;
    two d;
    c.read();
    d.read();
    sum(c, d);
}