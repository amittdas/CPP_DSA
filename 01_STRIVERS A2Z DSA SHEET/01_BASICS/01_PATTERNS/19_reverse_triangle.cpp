#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=1; i<=n; i++){
        for(char ch = 'A' + n - i; ch<= 'A'+n-1; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main(){
    print(5);
return 0;
}