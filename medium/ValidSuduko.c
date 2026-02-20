#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int rowCheck(char** board,int row){
    int count[9] = {0};
    int n;
    for(int i = 0;i < 9;i++){
        if(board[row][i] == '.'){
            continue;
        }
        else{
            n = board[row][i]-'0';
            count[n-1]++;
            if(count[n-1] == 2){
                return 0;
            }
        }
    }
    return 1;
}
int columnCheck(char** board,int col){
    int count[9] = {0};
    int n;
    for(int i = 0;i < 9;i++){
        if(board[i][col] == '.'){
            continue;
        }
        else{
            n = board[i][col]-'0';
            count[n-1]++;
            if(count[n-1] == 2){
                return 0;
            }
        }
    }
    return 1;   
}

int boxCheck(char** board,int n){
    int column = (n%3)*3;
    int row = (n/3)*3;
    int count[9] = {0};
    int m;
    for(int i = row;i <=row+2 ;i++){
        for(int j = column;j<=column+2;j++){
            if(board[i][j] == '.'){
                continue;
            }
            else{
                m = board[i][j]-'0';
                count[m-1]++;
                if(count[m-1] == 2){
                    return 0;
                }
            }
        }
    }
    return 1;
}
bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    *boardColSize = 9;
    for(int i = 0;i<9;i++){
        if(boxCheck(board,i) && rowCheck(board,i) && columnCheck(board,i)){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}