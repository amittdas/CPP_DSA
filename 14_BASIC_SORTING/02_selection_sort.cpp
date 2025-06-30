#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

void selectionSort(int *arr, int n){
    
    for(int i=0; i<n-1; i++){
        int minidx=i;
        for(int j=i+1; j<n; j++){
            if(arr[minidx]>arr[j]){
                minidx=j;
            }
        }
        swap(arr[minidx],arr[i]);
    }
    printArray(arr, n);
}

int main(){
    int arr[]= {5,4,1,3,2};
    int n= sizeof(arr)/sizeof(int);

    selectionSort(arr, n);
return 0;
}