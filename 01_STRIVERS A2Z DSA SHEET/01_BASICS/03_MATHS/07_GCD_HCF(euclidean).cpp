#include<bits/stdc++.h>
using namespace std;

// bruteforce
int printGCD(int n1, int n2){
    int gcd = 1;
    for(int i=1; i<=min(n1,n2); i++){
        if((n1%i == 0) && (n2%i == 0)){
            gcd = i;
        }
    }
    return gcd ;
}

// euclidean algorithm
int euclidean(int n1, int n2){
    while(n1>0 && n2>0){
        if(n1>n2) n1 = n1%n2;
        else n2 = n2%n1;
    }
    if(n1 == 0) return n2;
    if(n2 == 0) return n1;

    return 0;
}

int main(){
    cout << euclidean(9,12) << endl ;
    cout << euclidean(7,14) << endl ;
    cout << euclidean(7,11) << endl ;
    cout << euclidean(91,117) << endl ;
    cout << euclidean(26,39) << endl ;
    cout << euclidean(12,18) << endl ;
return 0;
}