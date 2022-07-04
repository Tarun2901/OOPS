#include<iostream>
using namespace std;

class A {
    public:
    void sayHello()
    {
        cout<<"Hello World"<<endl;
    }
    void sayHello(string str)
    {
        cout<<"Hello World"<<endl;
    }

    int sayHello(char name)
    {
        cout<<"Hello"<<endl;
    }
};
int main()
{

    A obj;
    obj.sayHello();
    return 0;
}