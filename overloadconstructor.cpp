#include<iostream>
#include<conio.h>
class con
{
    int x,y;
    public:
    con()
    {
        x=0;
        y=0;
    }

    void disp()
    {
        std::cout<<"\n x="<<x;
        std::cout<<"\n y="<<y;
    }
    void disp2()
    {
        std::cout<<"\n value of x:"<<x;
       
    }
    con(int a,int b)
    {
        x=a;
        y=b;
    }
};
int main()
{
    con c(10,20);
    c.disp();
    c.disp2();
    getch();
    return 0;
    
}
