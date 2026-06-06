#include<bits/stdc++.h>
using namespace std;

void armstrong(int n){
    int sum = 0;
    int dup = n;
    while(n > 0){
        int lastDigit = n % 10;
        sum = sum + (lastDigit*lastDigit*lastDigit);
        n = n / 10;
    }
    if(dup == sum) cout << "true";
    else cout << "false";
}

int main(){
    int n ;
    cin >> n;

    armstrong(n);
return 0;
}