#include<bits/stdc++.h>
using namespace std;

void gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a = a % b ;
        }else{
            b = b % a ;
        }
    }
    if(a == 0){
        cout << "The GCD is " << b;
    }else{
        cout << "The GCD is " << a;
    }
}

int main(){
    gcd(36,18);
return 0;
}