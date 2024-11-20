#include <iostream>
#include <conio.h>
#define PIE 3.14
using namespace std;
class circle
{
protected:
    int radius;
    float area1;

public:
    void get()
    {

        std ::cout << "Enter the radius:";
        std::cin >> radius;
    }
    void ar()
    {
        area1 = PIE * radius * radius;
    }
    void display()
    {
        std::cout << "Area of circle is: \t" << area1;
    }
};
class cylinder : public circle
{
protected:
    int height;
    float area2;

public:
    void get1()
    {
        std::cout << "Enter the height:";
        std::cin >> height;
    }
    void ar1()
    {
        area2 = 2 * PIE * radius * height + 2 * PIE * radius * radius;
    }
    void display1()
    {
        std::cout << "\nArea of cylinder is : " << area2;
    }
};
int main()
{
    cylinder c;
    c.get();
    c.get1();
    c.ar();
    c.ar1();
    c.display();
    c.display1();
    return 0;
}