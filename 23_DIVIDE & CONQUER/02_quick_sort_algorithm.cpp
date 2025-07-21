#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int arr[], int si, int ei){     //setting pivot element
    int i = si-1;
    int pv = arr[ei];
    for(int j=si; j<ei; j++){
        if(arr[j]<=pv){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[ei]);
    return i;
}

void quickSort(int arr[], int si, int ei){
    //base case
    if(si>=ei){
        return;
    }
    int pivot = partition(arr, si, ei);
    quickSort(arr, si, pivot-1);         //left half
    quickSort(arr, pivot+1, ei);         //right half
}

//Time complexity = O(nlog n)    in average cases
//Time complexity = O(n^2)    in worst cases (if the pivot element of the array is the smallest element or the largest element)
int main(){
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;
    
    quickSort(arr, 0, n-1);
    printArray(arr, n);

return 0;
}