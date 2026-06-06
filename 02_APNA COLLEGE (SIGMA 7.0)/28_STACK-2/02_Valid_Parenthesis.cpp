#include<bits/stdc++.h>
using namespace std;

bool validParenthesis(string str){
    stack<char> s;

    for(size_t i=0; i<str.size(); i++){
        char ch = str[i];
        if(ch =='(' || ch =='{'  || ch =='['){
            s.push(ch);
        }else{
            // if stack is empty
            if(s.empty()){
                return false;
            }
            //match
            int top = s.top();
            if( (top == '(' && ch == ')') ||
                (top == '{' && ch == '}') ||
                (top == '[' && ch == ']') ){
                    s.pop();
            }else{
                return false;
            }
        }
    }
    return s.empty();
}

int main(){
    string s1 = "([}])" ;     // invalid
    string s2 = "([{}])";     // valid

    cout << validParenthesis(s1)<<endl;
    cout << validParenthesis(s2)<<endl;
return 0;
}