// MULTIPLE INHERITANCE
// CLASS     CLASS
//        |
//       BASE

#include<bits/stdc++.h>
using namespace std;

class Teacher {
    public:
        int salary;
        string subject;
};

class Student {
    public:
        int rollno;
        float cgpa;
};

class TA : public Teacher, public Student {
    public:
        string name;

};

int main(){
    TA t1;
    t1.name = "Amit";
    t1.subject = "c++";
    t1.rollno = 2 ;
    t1.cgpa = 9.2 ;

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.rollno<<endl;
return 0;
}