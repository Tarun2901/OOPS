#include <iostream>
#include <string.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;
    Hero()
    {
        name = new char[100];
        cout << "Simple Constructor called" << endl;
    }

    // Parametrized Constructor
    Hero(int health)
    {   // this is essentially a pointer which
        // stores the address of the current object
        cout << "this ->" << this << endl;
        this->health = health;
    }
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    // Copy Constructor

    Hero(Hero &obj)
    {
        char *ch = new char[strlen(obj.name) + 1];
        strcpy(ch, obj.name);
        this->name = ch;
        this->health = obj.health;
        this->level = obj.level;
    }
    void print()
    {
        cout << endl;
        cout << "Name : " << this->name << endl;
        cout << this->health << endl;
        cout << this->level << endl;
    }
    int getHealth()
    {
        return health;
    }
    void setHealth(int h)
    {
        health = h;
    }

    char getLevel()
    {
        return level;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    static int random()
    {
        return timeToComplete;
    }
    ~Hero()
    {
        cout << "Destructor called" << endl;
    }
};

int Hero::timeToComplete = 5;
int main()
{
    cout << Hero::random() << endl;
    // cout<<Hero::timeToComplete<<endl;
    // Hero a;
    // cout<<a.timeToComplete<<endl;

    // // Statically
    // Hero a;
    // //Dynamically
    // Hero *b = new Hero();
    // //call destructor manually for dynamically created objects
    // delete b;
    // Copy Constructor

    // Hero suresh(70,'c');
    // suresh.print();
    // Hero r(suresh);
    // r.print();

    // Object created statically

    // Hero ramesh(10);
    // ramesh.print();
    // // cout<<"Address of Ramesh : "<<&ramesh<<endl;
    // //dynamically
    // Hero *sh = new Hero(11);
    // sh->print();
    // Hero k(22,'B');
    // k.print();
    // static allocation

    // Hero h;
    // h.setHealth(100);
    // h.level = 'A';
    // cout<<h.getHealth()<<endl;
    // cout<<h.level<<endl;

    // //dynamic allocation
    // Hero *b = new Hero;
    // b->setHealth(70);
    // b->level = 'B';

    // cout<<(*b).getHealth()<<endl;
    // cout<<(*b).level<<endl;
    // //alternatively

    // cout<<b->getHealth()<<endl;
    // cout<<b->level<<endl;
    return 0;
}