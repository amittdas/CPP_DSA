#include<bits/stdc++.h>
using namespace std;

void toUpperCase(char word[], int n){
    for(int i=0; i<n; i++){
        char ch = word[i];
        // uppercase
        if(ch>='A' && ch<='Z'){
            continue;
        }
        //lowercase
        else{
            word[i]= ch - 'a' + 'A';
        }
    }
}

int main(){
    char word[] = "ApPle";
    toUpperCase(word, strlen(word));

    cout<<word;
return 0;
}