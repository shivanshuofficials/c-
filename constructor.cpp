#include <iostream>
using namespace std;
class ats
{
    int a,b,c;
    public:
    ats()
    {a=0;b=0;c=0;}
    ats(int x, int y, int z){
      a=x;b=y;c=z;
    }
    ats(ats &t){
        a=t.a; 
        b=t.b;
        c=t.c;

    }
    void output()
    {
        std::cout<<"\n"<<a<<"\n"<<b<<"\n"<<c;
    }
   
};

int main(){
    ats p;
 p.output();
 ats s(10,20,30);
 s.output();
 ats t(s);
 t.output();
}