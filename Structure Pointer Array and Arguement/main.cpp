#include <iostream>

using namespace std;

struct Point
{
    int x;
    int y;
};
void Print(Point p);
void Print(Point p)
{
    cout<<" "<<p.y<<" "<<p.x;
}
int main()
{
    struct Point p={10,20};
    struct Point *ptr=&p;

    cout<<ptr->x<<" ";
    ptr->y=50;
    p.x=69;
    cout<<ptr->y;
    Print(p);
    return 0;
}
