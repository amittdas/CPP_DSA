#include<bits/stdc++.h>
using namespace std;

int clearithbit(int num, int i){
    int bitMask = ~(1<<i);
    return num & bitMask;
}

int main(){
    cout<<clearithbit(6,1)<<endl;
return 0;
}