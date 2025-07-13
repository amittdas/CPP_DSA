//Create a user class with properties: id(private), username(public), password(private)
//Its ID should be initialised in a parameterised constructor.
//It should have getter and setter for the password.

#include<bits/stdc++.h>
using namespace std;

class User{
    private:
        int id;
        string password;
    public:
        string username;
    User(int id){
        this->id=id;
        // cout<<"Your id is: "<< password <<endl;
    }

    //setter
    void setPassword(string password){
        this->password = password;
    }
    //getter
    string getpassword(){
        return password;
    }
};

int main(){
    User u1(101);
    u1.username = "amitt_das";
    u1.setPassword("abcd");

    cout<<"Username is: "<<u1.username<<endl;
    cout<<"Password is: "<<u1.getpassword()<<endl;
return 0;
}