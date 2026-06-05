#include<bits/stdc++.h>
using namespace std;

void printArrow(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n){
            stars = 2*n - i;
        }
        for(int j=0; j<stars; j++){
            cout << "*";
        }
        cout << endl ;
    }
}

void print(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl ;
    }
    
    for(int i=1; i<n; i++){
        for(int j=n; j>i; j--){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    printArrow(5);
return 0;
}