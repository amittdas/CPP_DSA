#include<bits/stdc++.h>
using namespace std;

//variables declared as static in a function are created & initialised once for the lifetime of the program.
//variables declared as static in a class are created & initialised once. they are shared by all the objects of the class.
void counter(){
    static int count = 0;
    count++;
    cout << "count: "<< count<<endl;
}

int main(){
    counter();
    counter();
    counter();
return 0;
}