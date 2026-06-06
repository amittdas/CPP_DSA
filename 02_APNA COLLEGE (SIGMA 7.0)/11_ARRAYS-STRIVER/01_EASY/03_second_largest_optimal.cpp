#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n){
    int largest = arr[0];
    int secondlargest = -1;
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
        }
    }
    return secondlargest;
}

int main(){
    int arr[] = {1,2,3,4,5};

    cout << secondLargest(arr, 5);
return 0;
}