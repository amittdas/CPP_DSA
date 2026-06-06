#include<bits/stdc++.h>
using namespace std;

class Car {
    string name;
    string colour;

    public:
        //constructor
        Car(){                                      //non-parameterised constructor
            cout<<"constructor without parameters"<<endl;
        }
        Car(string name, string colour){      //parameterised constructor
            cout<<"Constructor is called and Object is created.."<<endl;
            this->name = name;
            this->colour = colour;
        }
        void start(){
            cout << "Car has started"<<endl;
        }
        void stop(){
            cout << "Car has stopped"<<endl;
        }
        //getter
        string getName(){
            return name;
        }
};

int main(){
    Car c0;
    Car c1("maruti 800", "white");
    cout<<"Car name is: "<<c1.getName()<<endl;
return 0;
}