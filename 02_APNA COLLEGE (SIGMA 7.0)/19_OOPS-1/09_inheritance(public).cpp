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

class Fish : public Animal{
    public:
        int fins;
        void swim(){
            cout << "swims..." << endl;
        }
};

//inheritance with public access modifiers
int main(){
    Fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;
    f1.swim();
    f1.eat();
    f1.breathe();
return 0;
}