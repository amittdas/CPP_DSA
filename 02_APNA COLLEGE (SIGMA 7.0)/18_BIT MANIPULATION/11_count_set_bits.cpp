#include<bits/stdc++.h>
using namespace std;

int countSetBits(int num){
    int count = 0;
    while(num>0){
        int lastDigit = num & 1;
        count+=lastDigit;
        num = num>>1;
    }
    cout<<count<<endl;
    return count;
}

int main(){
    countSetBits(10);
return 0;
}