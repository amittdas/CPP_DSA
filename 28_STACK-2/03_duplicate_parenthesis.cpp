#include<bits/stdc++.h>
using namespace std;

bool duplicateParenthesis(string str){
    stack<char> s;
    for(size_t i=0; i<str.size(); i++){
        char ch = str[i];
        if(ch != ')'){       // non closing
            s.push(ch);
        }else{                // closing
            if(s.top() == '('){
                return true;
            }
            while(s.top() != '('){
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}

int main(){
    string s1 = "((a+b))";
    string s2 = "((a+b)+(c+d))";

    cout<<duplicateParenthesis(s1)<<endl;
    cout<<duplicateParenthesis(s2)<<endl;
return 0;
}