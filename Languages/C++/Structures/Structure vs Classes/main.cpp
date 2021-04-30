#include <iostream>

using namespace std;


struct Base
{
    int x;
};

struct Derived: Base
{

} ;
/*
class Base
{
public:
    int x;
};
class Derived : public Base
{

};
*/
int main()
{
    Derived d;
    d.x=10;
    cout<<d.x;
    return 0;
}


