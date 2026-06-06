#include<bits/stdc++.h>
using namespace std;

void maxAreaHistogram(vector<int> height){
    int n = height.size();
    vector<int> nsl(n);    // next smaller left
    vector<int> nsr(n);    // next smaller right
    stack<int> s;

    // next smaller left
    nsl[0] = -1;
    s.push(0);
    for(int i=0; i<n; i++){
        int curr = height[i];
        while(!s.empty() && curr <= height[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsl[i] = -1;
        }else{
            nsl[i] = s.top();
        }
        s.push(i);
    }

    // clear stack
    while(!s.empty()) s.pop();

    // next smaller right
    nsr[n-1] = n;
    s.push(n-1);
    for(int i=n-2; i>=0; i--){
        int curr = height[i];
        while(!s.empty() && curr <= height[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsr[i] = n;
        }else{
            nsr[i] = s.top();
        }
        s.push(i);
    }

    // calculating area
    int maxArea = 0;
    for(int i=0; i<n; i++){
        int ht = height[i];
        int width = nsr[i] - nsl[i] - 1;
        int area = ht * width;
        maxArea = max(area, maxArea);
    }

    cout << "Max Area of Histogram: " << maxArea << endl;
}

int main(){
    vector<int> height = {2, 1, 5, 6, 2, 3};
    maxAreaHistogram(height);
    return 0;
}
