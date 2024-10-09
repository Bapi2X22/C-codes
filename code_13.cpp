#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;
    friend void distance(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
    // void distance(Point, Point);
};

void distance(Point p1, Point q1)
{
    float X = sqrt(pow((p1.x - q1.x), 2) + pow((p1.y - q1.y), 2));
    cout << "The distance between these two points is " << X << endl;
};

int main()
{
    Point p(1, 2);
    p.displayPoint();
    Point q(4, 6);
    q.displayPoint();
    distance(p, q);

    return 0;
}