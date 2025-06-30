#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

void bubbleSort(int *arr, int n){
    
    for(int i=0; i<n-2; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    printArray(arr, n);
}

int main(){
    int arr[]= {5,4,1,3,2};
    int n= sizeof(arr)/sizeof(int);

    bubbleSort(arr, n);
return 0;
}