#include<bits/stdc++.h>
using namespace std;

class Student {
    //properties
    private:
        string name;
    public:
        float cgpa;

    //method
    void getPercentage(){
        cout<< (cgpa * 10) << "%" << endl;
    }
};

int main(){
    //object
    Student s1;
    s1.cgpa = 9.0;
    cout<<s1.cgpa<<endl;
    s1.getPercentage();
return 0;
}