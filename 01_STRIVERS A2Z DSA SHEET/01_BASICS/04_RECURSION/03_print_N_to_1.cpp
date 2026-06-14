#include<bits/stdc++.h>
using namespace std;

void printNtoOne(int n, int i){
    if(n < i) return ;
    cout << n << endl;
    printNtoOne(n-1,i);
}

int main(){
    printNtoOne(10, 1);
return 0;
}