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



#include<bits/stdc++.h>
using namespace std;

class Parent{
public:
    string name;
    int age;
    int phone;

    void changePhone(int phone){
        int newPhone = phone;
        cout << newPhone;
    }
};

int main(){
    Parent p1;
    p1.name="Riyaz khan";
    cout << p1.name << endl;

    Parent p2;
    p2.changePhone(432);
    return 0;
}













#include<bits/stdc++.h>
using namespace std;

class Bank{

    public:
    int regtNo;
    string name;
    string city;
    double phone;

    // Bank(){
    //     cout << "Im non paramterized";
    // }

    // Bank(int phone){
    //     cout << "Im parameterized";
    // }

    Bank(int regtNo,string name,string city,double phone){
        this->regtNo=regtNo;
        this->name=name;
        this->city=city;
        this->phone=phone;
    }

    void showDetails(){
        cout << "Name = " << name << endl;
        cout << "Registration number = " << regtNo << endl;
        cout << "City = " << city << endl;
        cout << "Phone Number = " << phone;
    }
};

int main(){

    Bank b1(12,"Ayan","Dewas",1232345);
    b1.showDetails();
  

    return 0;
}