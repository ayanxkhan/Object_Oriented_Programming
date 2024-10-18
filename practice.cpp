#include<bits/stdc++.h>
using namespace std;

class Student{
public:

string name;
string subject;
int age;
int rollNo;

// void changeSubject(string sub){
//     subject = sub;
// }

Student(){
    cout << "Im student constructor" << endl;
}

// Student(string name){
//     this->name=name;
//     cout << "Im parametereized";
 
// }

// void printInfo(){
//     // cout << "Name = " << name << endl;
//     // cout << "Subject = " << subject << endl;
//     // cout << "Age = " << age << endl;
//     // cout << "RollNo = " << rollNo << endl;
// }



};

class Tuition:public Student{
public:
    string tutorName;

    // Tuition(){
    //     cout << "im tution constructor" << endl;
    // }
};

int main(){
    Student s1;
    // s1.name="Ayan";
    // s1.subject="DSA";
    // s1.changeSubject("OOPS");

    // s1.printInfo();

    Tuition t1;
    t1.name="ayan";
    t1.tutorName="Harry";

    cout << t1.name << endl;
    cout << t1.tutorName << endl;


    return 0;
}