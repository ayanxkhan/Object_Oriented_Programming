// copy constructor

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


// copy constructor
Teacher(Teacher &orgObj){/*pass by reference*/
cout << "Iam custom copy constructor" << endl;
this->name=orgObj.name;
this->dept = orgObj.dept;
this->subject= orgObj.subject;
this->salary=orgObj.salary;

}

void getInfo(){
    cout << "Name : " << name << endl;
    cout << "Subject : " << subject << endl;
}

};

int main(){
    Teacher t1("Ayan","CSE","OOPS",80000);
    t1.getInfo();

    Teacher t2(t1);   /*default copy constructor is invoked or called*/ /*if we have made custom constructor then it will be called*/
    t2.getInfo();


    return 0;
}