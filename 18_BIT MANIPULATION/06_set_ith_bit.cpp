#include<bits/stdc++.h>
using namespace std;

int setithbit(int number, int i){
    int bitmask = 1<<i;
    return (number | bitmask);
}

int main(){
    cout<<setithbit(6,3)<<endl;
return 0;
}