#include<iostream>
using namespace std;

class Human{

public:
    int height;
    int weight;
    int age;

    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male: public Human{
    public:
    string color;
    void sleep()
    {
        cout<<"Male is sleeping"<<endl;
    }
};
int main()
{

    Male m1;
    cout<<m1.age<<endl;
    cout<<m1.color<<endl;
    cout<<m1.height<<endl;
    cout<<m1.weight<<endl;
    m1.setWeight(85);
    cout<<m1.weight<<endl;
    m1.sleep();
    return 0;
}