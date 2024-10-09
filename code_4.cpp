#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
    // Static data member of class Employee

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getcount(void)
    {
        cout << "The value of the id is " << count << endl;
    }
};

int Employee ::count;

int main()
{
    Employee harry, rohan, maya;
    // harry.id=1;
    // harry.count=1;
    harry.setData();
    harry.setData();
    harry.getData();
    Employee ::getcount();

    rohan.setData();
    rohan.getData();
    Employee ::getcount();

    maya.setData();
    maya.getData();
    Employee ::getcount();

    return 0;
}