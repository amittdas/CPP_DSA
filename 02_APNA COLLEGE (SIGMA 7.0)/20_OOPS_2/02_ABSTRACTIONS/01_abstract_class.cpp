#include<bits/stdc++.h>
using namespace std;

//abstract class
class Shape {
    public:
        virtual void draw() = 0;   //pure virtual functions
};
class Circle : public Shape {
    public:
        void draw(){
            cout<<"draws circle...\n";
        }
};
class Square : public Shape {
    public:
        void draw(){
            cout<<"draws Square...\n";
        }
};

int main(){
    Circle c1;
    c1.draw();

    Square s1;
    s1.draw();
return 0;
}