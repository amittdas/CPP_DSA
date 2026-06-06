#include<bits/stdc++.h>
using namespace std;

class Student {
    //properties
    string name;
    float cgpa;

    //method
    void getPercentage(){
        cout<< (cgpa * 10) << "%" << endl;
    }
};

int main(){
    //object
    Student s1;
    cout<<sizeof(s1)<<endl;
return 0;
}