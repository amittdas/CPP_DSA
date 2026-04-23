#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){
    for(int i=0; i<(n/2); i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};

    reverse(arr, 5);

    for(int i=0; i<5; i++){
        cout << arr[i] << ", " ;
    }
return 0;
}