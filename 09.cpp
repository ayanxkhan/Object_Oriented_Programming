// Run time Polymorphism(dynamic polymorphism)
// function Overriding

#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
   void getInfo()
    {
        cout << "Show parent class";
    }
};

    // inheritance
    class Child : public Parent
    {
    public:
       void getInfo()
        {
            cout << "Show child class";
        }
    };


int main()
{
    // Child c1;
    // c1.getInfo();

    Parent p1;
    p1.getInfo();


    return 0;
}