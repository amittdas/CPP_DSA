#include<bits/stdc++.h>
using namespace std;

void print(int n){
    char start = 'A';
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout << start << " ";
            }
            start = 'A' + i;
            cout << endl;
        }
}

int main(){

    print(5);
return 0;
}