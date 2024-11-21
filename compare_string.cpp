#include<iostream>
#include<string.h>
using namespace std;
class strings{
 char str[20];
public:
void get(){
    cout<<"\n Enter the value:";
    cin>>str;
}
int operator>(strings t){
    int a=0;
    a = strcmp(str,t.str);
    return (a);
}
};
int main(){
strings str1,str2;
int s;
str1.get();
str2.get();
s=str1>(str2);
if(s>0){
    cout<<"str1 is big";
}
else{
    cout<<"str2 is big"; 
}

    

}