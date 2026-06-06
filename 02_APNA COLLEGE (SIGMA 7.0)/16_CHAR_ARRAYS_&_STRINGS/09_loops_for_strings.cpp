#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "amit das !";
    for(int i=0; i<str.length(); i++){
        cout<<str[i]<<endl;
    }

    for(char ch : str){
        cout<<ch<<",";
    }
    cout<<endl;
return 0;
}