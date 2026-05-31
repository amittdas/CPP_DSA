#include<bits/stdc++.h>
using namespace std;

// Finds the minimum element in the whole array and swaps it with the 1st element
void selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int min = i;
        for(int j=i; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {34, 45, 1, 31, 67, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    printArray(arr, n);
return 0;
}