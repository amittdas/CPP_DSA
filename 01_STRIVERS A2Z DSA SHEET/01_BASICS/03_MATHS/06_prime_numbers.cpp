#include<bits/stdc++.h>
using namespace std;

void primeNumber(int n){
    int count = 0;
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            count++;
            if(n/i != i) count++;
        }
    }
    if(count == 2) cout << "PRIME NUMBER" << endl;
    else cout << "NOT A PRIME NUMBER" << endl;
}

int main(){
    primeNumber(2);
    primeNumber(4);
    primeNumber(3);
    primeNumber(7);
    primeNumber(10);
return 0;
}