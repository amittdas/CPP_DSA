#include<bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int> arr, int target){
    int st = 0, end = arr.size()-1;
    int curSum = 0;

    vector<int> ans;
    while(st<end){
        curSum = arr[st]+arr[end];
        if(curSum==target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(curSum> target){
            end--;
        }
        else{
            st++;
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {2,11,7,15};
    int target = 9;

    vector<int> ans = pairSum(vec, target);
    cout<<ans[0]<<", "<<ans[1];

return 0;
}