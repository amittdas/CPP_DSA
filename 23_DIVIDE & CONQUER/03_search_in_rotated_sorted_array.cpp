#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int si, int ei, int tar){
    //base case
    if(si>ei){
        return -1;
    }

    int mid = si + (ei-si)/2;
    if(arr[mid] == tar){
        return mid;
    }

    //line 1
    if(arr[si]<<arr[mid]){
        if(arr[si]<=tar && tar<=arr[mid]){
            //left half
            return search(arr, si, mid-1, tar);
        }else{
            //right half
            return search(arr, mid+1, ei, tar);
        }
    }

    //line 2
    else{
        if(arr[mid]<=tar && tar<=arr[ei]){
            //right half
            return search(arr, mid+1, ei, tar);
        }else{
            //left half
            return search(arr, si, mid, tar);
        }
    }
}

//Time complexity = O(log n)
int main(){
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;

    cout<<"Index of the target is: " << search(arr, 0, n-1, 0)<<endl;;
return 0;
}