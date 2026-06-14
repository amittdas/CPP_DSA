#include<bits/stdc++.h>
using namespace std;

void printToN(int i, int n){
    if(i>n) return ;
    cout << i << endl;
    printToN(i+1, n);
}

int main(){
    printToN(1, 10);
return 0;
}