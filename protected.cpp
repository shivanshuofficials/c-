#include<iostream>
#include<conio.h>
class one 
{
    protected:
    int x;
    public:
    void get1()
    {
        std::cout<<"\n enter the value of x:";
        std::cin>>x;
    }
    void disp1()
    {
        std::cout<<"\n value of x:"<<x;
    }
};
class two : private one
{
    int y;
    public:
    void get2()
    {
       one ::get1();
        std::cout<<"\n enter the value of y:";
        std::cin>>y;
    }
    void disp2()
    {
       one::disp1();
        std::cout<<"\n value of y:"<<y;
    }
    void sum()
    {
     int t;
     t =0;
     t = x + y;
     std::cout<<"\n sum of x and y:"<<t;
    }
};
int main()
{
    two t;
    t.get2();
    t.disp2();
    t.sum();
    return 0;
}