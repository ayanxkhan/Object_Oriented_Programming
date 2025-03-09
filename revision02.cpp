#include<bits/stdc++.h>
using namespace std;

class University{

    private:
    int privateData;

    public:
    int students;
    string dept;
    string course;
    int enroll;

    // University(){
    //     cout << "im non parameterized";
    // }

    // University(int students){
    //     cout << "im parameterized";
    // }

    University(int students,string dept,string course,int enroll){
        this->students=students;
        this->dept=dept;
        this->course=course;
        this->enroll=enroll;
    }

    void printInfo(){
        cout << "Total Students = " << students << endl;
        cout << "Department = " << dept << endl;
        cout << "Course = " << course << endl;
        cout << "Enroll = " << enroll << endl;
    }

};

int main(){
    University u1(123,"CSE","OOPS",9999);
    u1.printInfo();



    return 0;
}