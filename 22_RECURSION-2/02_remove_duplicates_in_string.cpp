#include<bits/stdc++.h>
using namespace std;

void removeDup(string str, string ans, int i, int map[26]){
    if(i==str.size()){
        cout<<"ans: "<<ans<<endl;
        return;
    }
    int mapIdx = (int)(str[i] - 'a');

    if(map[mapIdx]){    //duplicate
        removeDup(str, ans, i+1, map);
    }else{                      //not duplicate
        map[mapIdx] = true;
        removeDup(str, ans+str[i], i+1, map);
    }
}

int main(){
    string str = "appnnacollege";
    string ans = "";
    int map[26] = {false};

    removeDup(str, ans, 0, map);
return 0;
}