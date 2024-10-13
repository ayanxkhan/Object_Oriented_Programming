// Inheritance
#include<bits/stdc++.h>
using namespace std;

class Person{
    public:

    string name;
    int age;

    // Person(string name,int age){
    //     this->name=name;
    //     this->age=age;
    // }

    Person(){

    }

};

class Student : public Person{

    public:

    int rollNo;

    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll No : " << rollNo << endl;
    }

};

int main(){
    Student s1;
    s1.name="Ayan";
    s1.age=21;
    s1.rollNo=440;
    s1.getInfo();
    return 0;
}