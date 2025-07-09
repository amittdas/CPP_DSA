#include<bits/stdc++.h>
using namespace std;

void updateithbit(int num, int i, int value){
    num = num & ~(1<<i);
    num = num | (value << i);
    cout<<num;
}

int main(){
    updateithbit(7,2,0);
return 0;
}