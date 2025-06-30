#include<bits/stdc++.h>
using namespace std;

void reverseArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

int main(){
    int arr[]={5,4,3,9,2};
    int n=sizeof(arr)/sizeof(int);

    int start=0, end = n-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    reverseArray(arr, n);
return 0;
}