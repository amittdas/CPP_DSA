#include<bits/stdc++.h>
using namespace std;

void printSubset(string str, string subset){
    if(str.size()==0){
        cout<<subset<<endl;
        return;
    }

    //YES Choice
    printSubset(str.substr(1,str.size()-1), subset + str[0]);

    //NO Choice
    printSubset(str.substr(1,str.size()-1), subset);
}

//Total number of subsets are:  2^n     where n = size

int main(){
    string str = "abc";
    string subset = "";

    printSubset(str, subset);
return 0;
}