#include<bits/stdc++.h>
using namespace std;



// So in this case, its worst time complexity is O(n*n)

// But if we add break condition when the array is already sorted, then the Best case time complexity is O(n);
void bubbleSort(int arr[], int n){
    for(int i=n-1; i>=1; i--){
        int didSwap = 0;
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
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

    bubbleSort(arr, n);
    printArray(arr, n);
return 0;
}