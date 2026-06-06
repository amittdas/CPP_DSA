#include<bits/stdc++.h>
using namespace std;

int sorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i] > arr[i-1]){

        }else{
            return false;
        }
    }
    return true;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int arr2[] = {1,2,3,4,59,23,6};

    cout << sorted(arr, 6);
    cout << endl;
    cout << sorted(arr2, 7);
return 0;
}