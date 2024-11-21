#include <iostream>
using namespace std;
 class complex{
    float real;
    float imaginary;

public:
    void get()
    {
        cout << "Enter the real number";
        cin >> real;
        cout << "Enter the imaginary number";
        cin >> imaginary;
    }
    void disp(){
        cout<<"imaginary number is "<<real<<"+i"<<imaginary;
    }
    complex operator+(complex p){
        complex c;
        c.real = real + p.real;
        c.imaginary = imaginary + p.imaginary;
        return(c);

    }

};
int main(){
    complex c1,c2,c3;
    c1.get();
    c2.get();
    c3=c1+(c2);
    c3.disp();

}