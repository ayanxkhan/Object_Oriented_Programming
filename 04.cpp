// parameterized constructor
#include<bits/stdc++.h>
using namespace std;

class Teacher{
public:

string name;
string dept;
string subject;
double salary;


Teacher(string n,string d,string s,double sal){
name = n;
dept = d;
subject = s;
salary = sal;
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