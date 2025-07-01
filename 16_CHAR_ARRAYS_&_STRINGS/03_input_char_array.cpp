#include<bits/stdc++.h>
using namespace std;

int main(){

    //ignores all the letters after whitespace
    char word[30];
    cin>> word;
    cout<<"your word is: "<<word<<endl;
    cout<<"Length of the word is: "<<strlen(word)<<endl;

    //includes all the whitespaces
    char sentence[30];
    cin.getline(sentence, 30, '*');
    cout<<"your sentence is: "<<sentence<<endl;
    cout<<"Length of the sentence is: "<<strlen(sentence)<<endl;
return 0;
}