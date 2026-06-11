#include<bits/stdc++.h>
using namespace std;

int countDigits(int num){
    int count = 0;
    while(num > 0){
        num = num / 10;
        count++;
    }
    return count ;
}

void armstrongNumber(int n){
    int count = countDigits(n);
    int dup = n;
    int sum = 0 ;
    while(n > 0){
        int lastDigit = n % 10;
        sum = sum + pow(lastDigit, count);
        n = n / 10 ;
    }
    if(dup == sum) cout << "Armstrong number";
    else cout << "Not an Armstrong Number";
}

int main(){
    armstrongNumber(371);
    cout << endl;
    armstrongNumber(1634);
    cout << endl;
    armstrongNumber(16);
return 0;
}