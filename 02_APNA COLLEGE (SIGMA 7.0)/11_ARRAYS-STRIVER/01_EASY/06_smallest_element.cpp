#include<bits/stdc++.h>
using namespace std;

int smallest(int arr[], int n){
    int minimum = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] < minimum){
            minimum = arr[i];
        }
    }
    return minimum;
}

int main(){
    int arr[] = {1,6,2,3,-2,3,7};
    cout << smallest(arr, 7);
return 0;
}