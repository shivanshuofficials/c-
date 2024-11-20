#include<iostream>
#include<conio.h>

class number{
    private:
        int no1,no2;
    public:
        void read()
        {
            std::cout<<"\n enter the value of no1:\t";
            std::cin>>no1;
            std::cout<<"\n enter the value of no2:\t";
            std::cin>>no2;
        }
        void display()
        {
            std::cout<<"\n value of no1:\t"<<no1;
            std::cout<<"\n value of no2:\t"<<no2;
        }
        void add(number p, number q){
            no1 = p.no1 + q.no1;
            no2 = p.no2 + q.no2;
        }
        void calculateSum(number p, number q){
            int sum1 = p.no1 + q.no1;
            int sum2 = p.no2 + q.no2;
            std::cout<<"\n Sum of no1: "<<sum1;
            std::cout<<"\n Sum of no2: "<<sum2;
        }
};

int main()
{
    number x, y, z;
    x.read();
    x.display();
    y.read();
    y.display();
    z.calculateSum(x, y);
    z.add(x, y);
    return 0;
}