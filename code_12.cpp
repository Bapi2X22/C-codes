# include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int,int);  // constructor should be declared at the public section of the class
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y)
{ // parameterized constructor
    a = x;
    b = y;
};

int main(){
    complex a(2,3); // Implicit call
    // Explicit call
    complex b=complex(5,8);
    a.printNumber();
    b.printNumber();

   return 0;
}