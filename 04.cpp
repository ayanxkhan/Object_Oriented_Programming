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




// #include<bits/stdc++.h>
// using namespace std;

// class Student{
// public:

// string name;
// string subject;
// int age;
// int rollNo;

// // void changeSubject(string sub){
// //     subject = sub;
// // }

// Student(string name,string subject,int age,int rollNo){
//     this->name=name;
//     this->subject=subject;
//     this->age=age;
//     this->rollNo=rollNo;
// }

// void printInfo(){
//     cout << "Name = " << name << endl;
//     cout << "Subject = " << subject << endl;
//     cout << "Age = " << age << endl;
//     cout << "RollNo = " << rollNo << endl;
// }



// };

// int main(){
//     Student s1("Ayan Khan","OS",21,404);
//     // s1.name="Ayan";
//     // s1.subject="DSA";
//     // s1.changeSubject("OOPS");

//     s1.printInfo();
//     return 0;
// }