#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(char word[], int n){
    int st=0, end=n-1;
    while(st<end){
        if(word[st++]!=word[end--]){
            cout<<"not a valid palindrome"<<endl;
            return false;
        }
    }
    cout<<"valid palindrome"<<endl;
    return true;
}

int main(){
    char word[]="racecar";
    isPalindrome(word, strlen(word));
return 0;
}