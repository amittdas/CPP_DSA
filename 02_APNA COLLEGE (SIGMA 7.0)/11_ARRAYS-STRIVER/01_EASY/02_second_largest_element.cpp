#include<bits/stdc++.h>
using namespace std;

int secondlargestElement(int arr[], int n){
    int largest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    int secondLargest = -1;
    for(int i=0; i<n; i++){
        if(arr[i]>secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main(){
    int arr[] = {1,2,3,4,5};

    cout << secondlargestElement(arr, 5);
return 0;
}