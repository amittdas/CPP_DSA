// MULTI LEVEL INHERITANCE
//  A
//  |
//  B
//  |
//  C

#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        void eat(){
            cout<<"eats..\n";
        }
        void breathe(){
            cout<<"breathes..\n";
        }
};

class Mammal : public Animal {
    public:
        string bloodType;
        Mammal(){
            bloodType = "warm";
        }
};

class Dog : public Mammal {
    public:
        void tailWag(){
            cout<< "A dog wags its tail\n";
        }
};

//multi level inheritance
int main(){
    Dog d1;

    d1.eat();
    d1.breathe();
    d1.tailWag();
    cout<<d1.bloodType<<endl;
return 0;
}