#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Inside Class A" << endl;
    }
};

class B : virtual public A
{
public:
    B() : A()
    {
        cout << "Inside Class B" << endl;
    }
};

class C : virtual public A
{
public:
    C() : A()
    {
        cout << "Inside Class C" << endl;
    }
};

class D : public C, public B
{
public:
    D() : B(), C()
    {
        cout << "Inside Class D" << endl;
    }
};

int main()
{
    D ojj1;

    return 0;
}