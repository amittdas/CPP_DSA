#include<bits/stdc++.h>
using namespace std;

int countDigits(int num){    // TC = O( log10(n) )
    int count = 0;
    while(num > 0){
        num = num / 10;
        count++;
    }
    return count ;
}

int countDigitsLog(int n){
    int count = (int)(log10(n)+1);
    return count ;
}

int main(){
    int num = 67547;
    cout << countDigits(num);
    cout << countDigitsLog(num);
return 0;
}