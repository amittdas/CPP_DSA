#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        string color;
        void eat(){
            cout << "eats..." << endl;
        }
        void breathe(){
            cout << "breathes..." << endl;
        }
};

class Fish : protected Animal{
    public:
        int fins;
        void swim(){
            eat();
            cout << "swims..." << endl;
        }
};

//inheritance with protected access modifiers
int main(){
    Fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;
    f1.swim();
return 0;
}