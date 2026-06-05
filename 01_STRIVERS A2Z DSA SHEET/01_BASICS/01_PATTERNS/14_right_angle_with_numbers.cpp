#include<bits/stdc++.h>
using namespace std;

void print(int n){
    int start = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << start << "  ";
            start++;
        }
        cout << endl;
    }
}

int main(){
    print(5);
return 0;
}