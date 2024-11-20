#include<iostream>
#include<conio.h>
using namespace std;
class increament{
    int x;
    public:
    increament(){
        x=0;
    }
    increament(int p)
    {
        x=p;
    }
    void disp()
    {
        cout<<"\n the value of x is "<<x;
    }
    void operator ++(int){
        x++;
    }
};
int main()
{
    increament t(5);
    t.disp();
    t++;
    t.disp();
    t++;
    t.disp();   
    getch();
    return 0;
}
    
    
