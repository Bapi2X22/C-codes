#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
    Complex(int x){
        a=x;
        b=0;
    }
    Complex(){
        a=0;
        b=0;
    }
};

int main()
{
Complex c1(4,6);
c1.printNumber();
Complex c2(5);
c2.printNumber();
Complex c3;
c3.printNumber();
    return 0;
}