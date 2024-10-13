// Constructor
#include<bits/stdc++.h>
using namespace std;

class Teacher{
// here we have created salary a private data so that other class or main function cannot access it.
// private:
// double salary;


public:

// this is constructor which has same name as class and has no return type
// Teacher(){
//     cout << "HI Iam Constructor" << endl;
// }


// Non parameterized Constructor
Teacher(){
    dept = "Computer Science";
    // now we dont have to assign the value of dept everywhere
    // all the value of dept will be initialized with Computer science
    // ie if i remove cout of dept from main function then also dept will gets printed
}





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
    // here at time of object creation now constructor method will run first 
    Teacher t1;
    // Here i have created one more object so again constructor function will be executed and print the output
    Teacher t2;

    t1.name="Abc";
    // t1.dept="Cs";
    t1.subject="Oops";
    t1.salary=25000;

    cout << t1.name << endl;
    cout << t1.salary << endl;

    cout << t1.dept;
    return 0;
}