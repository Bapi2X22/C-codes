#include <iostream>
using namespace std;

// Base class
class Employee
{
    // int id;
    // float salary;
public:
    float salary;
    int id;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34;
    };
    Employee() {}
};

// Derived class
/*
class {{derived-class-name}} : {{visibility-mode}} {{base -class-name}}
{
    class members/methods/etc...
}
1. Default visibility mode is private
2. private visibility mode: public members of the base class becomes private members of the derived class.
3. public visibility mode: public members of the base class becomes public members of the derived class.
*/
class Programmer : public Employee
{
public:
    int languagecode;
    Programmer(int inpId)
    {
        id = inpId;
        languagecode = 9;
    }
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languagecode << endl;
    skillF.getdata();
    cout << skillF.id << endl;
    return 0;
}