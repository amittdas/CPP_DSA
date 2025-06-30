#include<bits/stdc++.h>
using namespace std;

void maxSubarraySum(int *arr, int n){
    int maxSum=INT_MIN;
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int currentSum=0;
            for(int i=start; i<=end; i++){
                currentSum+=arr[i];
            }
            cout<<currentSum<<",";
            maxSum=max(maxSum,currentSum);
        }
        cout<<endl;
    }
    cout<<"Maximum Subarray Sum: "<<maxSum<<endl;
}

// TIME COMPLEXITY = O(n^3)
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n= sizeof(arr)/ sizeof(int);

    maxSubarraySum(arr, n);
return 0;
}