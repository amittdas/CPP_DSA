#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows, cols;
    cout<<"Enter rows: ";
    cin>>rows;
    cout<<"Enter cols: ";
    cin>>cols;
    

    // creating 2d array
    int **matrix = new int*[rows];
    for(int i=0; i<rows; i++){
        matrix[i] = new int[cols];
    }

    // taking input
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>matrix[i][j];
        }
    }

    // output
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
return 0;
}