// polymorphism
// compile time polymorphism
// function overloading
#include<bits/stdc++.h>
using namespace std;

class Print{
    public:

    void Show(int x){
        cout << "int : " << x << endl;
    }

    void Show(char ch){
        cout << "char : " << ch << endl;
    }
};

int main(){
    Print P1;
    P1.Show(2);


    return 0;
}