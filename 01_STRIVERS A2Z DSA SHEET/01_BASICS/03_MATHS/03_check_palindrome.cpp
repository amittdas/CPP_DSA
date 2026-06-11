#include<bits/stdc++.h>
using namespace std;

bool palindrome(int num){
    int reversedNum = 0;
    int num2 = num ;
    while(num2 > 0){
        int lastdigit = num2 % 10;
        reversedNum = reversedNum*10 + lastdigit;
        num2 = num2 / 10;
    }
    if(reversedNum == num){
        return true;
    }
    return false;
}

int main(){
    int num1 = 12321;
    int num2 = 34567;
    cout << palindrome(num1) ;
    cout << endl ;
    cout << palindrome(num2) ;
return 0;
}