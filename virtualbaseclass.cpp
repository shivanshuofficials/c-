#include <iostream>
#include <conio.h>
using namespace std;
class one
{
protected:
    int x;

public:
    void get()
    {
        cout << "Enter x:";
        cin >> x;
    }
};
class two : virtual public one
{
protected:
    int y;

public:
    void get2()
    {
        cout << "Enter y:";
        cin >> y;
    }
};
class three : virtual public one
{
protected:
    int z;

public:
    void get3()
    {
        cout << "Enter z:";
        cin >> z;
    }
};
class four : public two, public three
{
    int total;

public:
    void sum()
    {
        total = x + y + z;
    }

    void disp()
    {
        cout << "Total:" << total;
    }
};
int main()
{
    four f;
    f.get();
    f.get2();
    f.get3();
    f.sum();
    f.disp();
}