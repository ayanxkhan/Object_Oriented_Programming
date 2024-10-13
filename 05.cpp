// this pointer
#include<bits/stdc++.h>
using namespace std;

class Teacher{
public:

string name;
string dept;
string subject;
double salary;

// here in parameters i have given full name instead n,d,s,sal
// so compiler will get confuse about name=name,dept=dept etc
Teacher(string name,string dept,string subject,double salary){
    // this->name specifies that name on lhs is object property
    // and right hand side is the constructor parameter
this->name = name;
this->dept = dept;
this->subject = subject;
this->salary = salary;
}

void getInfo(){
    cout << "Name : " << name << endl;
    cout << "Subject : " << subject << endl;
}

};

int main(){
    Teacher t1("Ayan","CSE","OOPS",80000);
    t1.getInfo();

    return 0;
}