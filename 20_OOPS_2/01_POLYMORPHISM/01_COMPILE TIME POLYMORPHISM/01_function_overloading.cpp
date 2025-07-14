#include<bits/stdc++.h>
using namespace std;

class Print {
    public:
        void shows(int x){
            cout<<"int: "<<x<<endl;
        }
        void shows(string str){
            cout<<"string: "<<str<<endl;
        }
};

int main(){
    Print obj1;
    obj1.shows(25);
    obj1.shows("amit");
return 0;
}