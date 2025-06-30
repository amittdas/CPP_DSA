#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int n, int key){
    int start=0;
    int end=n-1;

    while(start<=n){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int n= sizeof(arr)/sizeof(int);

    cout << binarySearch(arr, n, 10) << endl;
return 0;
}