#include<bits/stdc++.h>
using namespace std;

int main(){
    //strcpy
    //str1="hello world" --> this cannot be done.
    char str1[100];
    char str2[100]="hellllllo world";
    strcpy(str1, "hello world");
    cout<<str1<<endl;
    cout<<"--------"<<endl;
    strcpy(str1, str2);  // to copy from str2 to str1
    cout<<str1<<endl;

    //strcat
    char str3[100]="hello";
    char str4[100]="world";
    strcat(str3, str4);   // to concatenate/join str3 and str4
    cout<<str3<<endl;
    cout<<str2<<endl; //it remains same

    //strcmp
    //no relation with length
    //compares two strings based on their values(-ve,0,+ve)
    //if small = -ve
    //same = 0
    //if greater = +ve
    char str5[100]="abc";
    char str6[100]="abc";
    cout<<strcmp(str5,str6)<<endl;
return 0;
}