#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(size_t i, string &str){
    if(i >= str.size()/2){
        return true;
    }
    if(str[i] != str[str.size()-i-1]) return false;
    return checkPalindrome(i+1, str);
}

int main(){
    string str1 = "abcd";
    string str2 = "abba";
    string str3 = "madam";

    cout << checkPalindrome(0, str1) << endl;
    cout << checkPalindrome(0, str2) << endl;
    cout << checkPalindrome(0, str3) << endl;
return 0;
}