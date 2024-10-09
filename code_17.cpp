#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    };
    number(int num)
    {
        a = num;
    }
    number(number &obj)
    {
        cout << "Copy constructor called" << endl;
        a = obj.a;
    } // when there is no copy constructor then compiler provides one
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    number x(30), y, z(49), z2;
    z.display();
    x.display();
    y.display();
    number z1(x); // copy constructor
    z1.display();
    z2.display();
    z2 = z;
    number z3 = z;
    return 0;
}