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