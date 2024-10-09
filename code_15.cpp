#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;

public:
    Simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }
    void printData();
};

void Simple ::printData()
{
    cout << "The value of the datas are " << data1 << " and " << data2 << endl;
}

int main()
{
    // Simple s(1,4);
    Simple s(1);
    s.printData();
    return 0;
}