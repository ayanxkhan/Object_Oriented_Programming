// encapsulation 
#include<bits/stdc++.h>
using namespace std;

class Accounts{
    // This is data hiding
    private:
    string password;
    double balance;


// this data is public and can be accessed by anyone
    public:
    string accId;
    string userName;
};

int main(){
    // object creation
    Accounts a1;
    a1.userName="Ayan Khan";
    cout << a1.userName << endl;

// sice password is private so it cannot be accessed
    // a1.password="abc";


    return 0;
}