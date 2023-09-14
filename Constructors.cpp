#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    string color;
    int year;
    int wheel;

    Car(string color, int year, int wheel)
    {
        this->color = color;
        this->year = year;
        this->wheel = wheel;
    }
    Car(string color, int year)
    {
        this->color = color;
        this->year = year;
    }

    Car()
    {
    }

    Car(Car &c)
    { // deep copy
        this->color = c.color;
        this->year = c.year;
        this->wheel = c.wheel;
    }
    void print()
    {
        cout << "Year " << year << endl;
        cout << "color " << color << endl;
        ;
        cout << "wheel " << wheel << endl;
    }
};

class A{
     public :
     static int count;
     
    void print(){
        cout<<count<<endl;
    }




};

int A ::count =100;



int main()
{
    // Car obj1("black", 2001, 4);
    // Car obj2("grey" , 1456);
    // Car obj3;

    // obj1.print();
    // cout << "-----------------" << endl;
    // obj2.print();
    // cout<<"--------------------------"<<endl;
    // obj3.print();

    cout<<A::count<<endl;
    A obj1;
    obj1.print();
    A::count++;
    A obj2;
    obj2.print();
    obj1.print();
    return 0;
}

