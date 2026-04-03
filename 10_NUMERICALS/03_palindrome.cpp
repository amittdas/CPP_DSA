#include<bits/stdc++.h>
using namespace std;

void palindrome(int n){
    int rev = 0;
    int dup = n;
    while(n > 0){
        int lastDigit = n % 10;
        n = n / 10;
        rev = (rev*10) + lastDigit;
    }
    if(dup == rev){
        cout << "true";
    }else{
        cout << "false";
    }
}

int main(){
    int n;
    cin >> n;

    palindrome(n);
return 0;
}