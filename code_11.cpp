#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void);  // constructor should be declared at the public section of the class
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)
{ // default constructor
    a = 10;
    b = 0;
};

int main()
{
    complex c;
    c.printNumber();
    return 0;
}