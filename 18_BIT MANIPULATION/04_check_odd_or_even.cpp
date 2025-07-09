#include<bits/stdc++.h>
using namespace std;

void oddEven(int number){
    if((number & 1) == 0){
        cout<<"Even number"<< endl;
    }else{
        cout<<"Odd number";
    }
}

int main(){
    int num = 9;
    oddEven(num);
return 0;
}