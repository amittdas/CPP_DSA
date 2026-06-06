#include<bits/stdc++.h>
using namespace std;

class Car {
    public:
        string name;
        string color;
        int *mileage;
    Car(string name, string color){
        this->name = name;
        this->color =color;
        mileage = new int;    //dynamic allocation
        *mileage = 12;
    }
    //copy constructor
    Car(Car &original){
        //copying original to main
        name = original.name;
        color = original.color;
        mileage = original.mileage;
    }
    ~Car(){
        cout<<"deleting object..."<<endl;
        if(mileage!=NULL){
            delete mileage;
            mileage = NULL;
        }
    }
};

int main(){
    Car c1("maruti 800", "white");
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;
return 0;
}