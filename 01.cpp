#include<bits/stdc++.h>
using namespace std;

class Teacher{
// here we have created salary a private data so that other class or main function cannot access it.
// private:
// double salary;


public:
// attributes
string name;
string dept;
string subject;
double salary;


// method
void changeDept(string  newDept){
    dept = newDept;
}

};

int main(){
    // objects creation
    Teacher t1;

    t1.name="Abc";
    t1.dept="Cs";
    t1.subject="Oops";
    t1.salary=25000;

    cout << t1.name << endl;
    cout << t1.salary << endl;
    return 0;
}