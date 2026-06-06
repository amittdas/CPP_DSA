//count total ways to tule a floor (2*n) with tiles (2*1)

#include<bits/stdc++.h>
using namespace std;

int tilingProb(int n){   //floor size = 2*n

    //base case
    if(n==0 || n==1){
        return 1;
    }
    return tilingProb(n-1) + tilingProb(n-2);
}

int main(){
    int n = 4;
    cout << tilingProb(n) << endl;
return 0;
}