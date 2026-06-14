#include<bits/stdc++.h>
using namespace std;

void printN(int i, int n){
    if(i < 1) return ;
    printN(i-1, n);
    cout << i << endl;
}

int main(){
    printN(5,5);
return 0;
}