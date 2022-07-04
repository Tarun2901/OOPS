#include<iostream>
using namespace std;


class A{
    public:
    void print()
    {
        cout<<"In A"<<endl;
    }
};

class B{
    public:
    void print()
    {
        cout<<"In B"<<endl;
    }
};

class C:public A,public B
{

};
int main()
{

    C c1;
    c1.A::print();
    c1.B::print();
    return 0;
}