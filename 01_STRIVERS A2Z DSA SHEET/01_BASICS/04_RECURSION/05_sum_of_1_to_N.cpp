#include<bits/stdc++.h>
using namespace std;

int printSum(int i, int sum){
    if(i < 1){
        return sum ;
    }
    return printSum(i-1, sum+i);
}

int main(){
    cout << printSum(10, 0);
return 0;
}