#include<bits/stdc++.h>
using namespace std;

void permutations(string str, string ans){
    int n = str.size();
    if(n==0){
        cout<<ans<<"\n";
        return;
    }
    for(int i = 0; i < n; i++){
        char ch = str[i];
        string nextStr = str.substr(0,i) + str.substr(i+1, n-i-1);
        permutations(nextStr, ans + ch);
    }
}

//total number of permutations are: n!  where n = size
int main(){
    string str = "abc";
    string ans = "";

    permutations(str, ans);
return 0;
}