#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int i, int j){
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};

    reverse(arr, 0, 4);

    for(int i=0; i<5; i++){
        cout << arr[i] << ", " ;
    }
return 0;
}