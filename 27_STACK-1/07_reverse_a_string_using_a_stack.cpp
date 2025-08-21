#include<bits/stdc++.h>
using namespace std;

string reverseString(string str){
    string ans;
    stack<char> s;
    
    // pushing at stack
    for(size_t i=0; i<str.size(); i++){
        s.push(str[i]);
    }

    // storing after poping from stack
    while(!s.empty()){
        char top = s.top();
        ans += top;
        s.pop();
    }

    return ans;
}

int main(){
    cout << reverseString("abcd");
return 0;
}