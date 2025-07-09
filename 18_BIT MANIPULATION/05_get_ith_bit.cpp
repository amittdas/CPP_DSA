#include<bits/stdc++.h>
using namespace std;

int GetithBit(int number, int i){
    int bitmask = 1<<i;
    if((number & bitmask) == 0){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    cout<<GetithBit(6,2)<< endl;
return 0;
}