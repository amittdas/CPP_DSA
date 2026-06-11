#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int num){
    int reversedNum = 0;
    while(num > 0){
        int lastdigit = num % 10;
        reversedNum = reversedNum*10 + lastdigit;
        num = num / 10;
    }
    return reversedNum;
}

int main(){
    int num = 10000;
    cout << reverseNumber(num);
return 0;
}