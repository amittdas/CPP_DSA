#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n){
    int largest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    int arr[] = {1,2,3,4,5};

    cout << largestElement(arr, 5);
return 0;
}