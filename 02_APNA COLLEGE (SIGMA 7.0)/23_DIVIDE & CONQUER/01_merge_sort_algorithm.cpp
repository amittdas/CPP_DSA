#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int si, int mid, int ei){

    //making a temporary vector for storing elements
    vector<int> temp;
    int i = si;
    int j = mid+1;

    while(i<=mid && j<=ei){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }

    //copying vector elements to original array
    int x=0;
    for(int i=si; i<=ei; i++){
        arr[i] = temp[x++];
    }
}

void mergeSort(int arr[], int si, int ei){

    //base case
    if(si>=ei){
        return;
    }
    //DIVIDE
    int mid = si + (ei - si)/2 ;
    mergeSort(arr, si, mid) ;       //left half
    mergeSort(arr, mid + 1, ei);    //right half
    
    //conquer
    merge(arr, si, mid, ei);
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// time complexity = O(nlog n)
// space complexity = O(n)
int main(){
    int arr[6] = {6,3,7,5,2,4};
    int n = 6;
    mergeSort(arr, 0, n-1);
    printArr(arr, n);
return 0;
}