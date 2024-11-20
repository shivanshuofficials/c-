#include<iostream>
using namespace std;
class abc{
    int a;
    public:
    void read();
    void print();

};
void abc ::read(){
    cout<<"enter the value";
    cin>>a;


}
void abc ::print()
{
    cout<<"the value is"<<a;
}
int main(){
    abc k;
    k.read();
    k.print();
    return 0;}