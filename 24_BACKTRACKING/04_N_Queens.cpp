#include<bits/stdc++.h>
using namespace std;

void printBoard(vector<vector<char>> boards){
    int n = boards.size();
    for(int i=0; i<n; i++){
        vector<char> newRow;
        for(int j=0; j<n; j++){
            cout<<boards[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"_________________"<<endl;
}

bool isSafe(vector<vector<char>> boards, int row, int col){
    int n = boards.size();

    //horizontal safety
    for(int j=0; j<n; j++){
        if(boards[row][j] == 'Q'){
            return false;
        }
    }

    //vertical safety
    for(int i=0; i<n; i++){
        if(boards[i][col] == 'Q'){
            return false;
        }
    }

    //left diagonal safety
    for(int i=row, j=col; i>=0 && j>=0; i--, j--){
        if(boards[i][j] == 'Q'){
            return false;
        }
    }

    //right diagonal safety
    for(int i=row, j=col; i>=0 && j<n; i--, j++){
        if(boards[i][j] == 'Q'){
            return false;
        }
    }

    return true;
}

void nQueens(vector<vector<char>> boards, int row){
    int n = boards.size();
    if(row == n){
        printBoard(boards);
        return ;
    }
    for(int j=0; j<n; j++){
        if(isSafe(boards, row, j)){
            boards[row][j] = 'Q';
        nQueens(boards, row + 1);
        boards[row][j] = '.';
        }
        
    }
}

int main(){
    vector<vector<char>> boards;
    int n = 5;
    for(int i=0; i<n; i++){
        vector<char> newRow;
        for(int j=0; j<n; j++){
            newRow.push_back('.');
        }
        boards.push_back(newRow);
    }
    nQueens(boards, 0);
return 0;
}