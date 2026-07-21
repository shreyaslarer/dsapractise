#include<bits/stdc++.h>
using namespace std;

//Brute force approach

void markrow(vector<vector<int>> &matrix, int row, int col){
    for (int j = 0; j<col; j++){
        if(matrix[row][j]!=0){
            matrix[row][j] =-1;
        }
    }
}

void markcol(vector<vector<int>> &matrix, int row, int col){
    for (int i = 0; i<row;i++){
        if(matrix[col][i]!=0){
            matrix[col][i]=-1;
        }
    }
}

void markcol(vector<vector<int>> &matrix, int row, int col){
    for (int i = 0; i<row; i++){
        if(matrix[i][col]!=0){
            matrix[i][col] =-1;
        }
    }
}

void setzeros(vector<vector<int>> &matrix){
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i =0; i<row; i++){
        for (int j =0; j<col; j++){
            if(matrix[i][j]==0){
                markcol(matrix, i, j);
                markrow(matrix, i ,j);

            }
        }
    }

    for (int i =0; i<row; i++){
        for (int j =0; j<col; j++){
            if (matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }
}


//Better Approach
void setzeros(vector<vector<int>> &matrix){

    int row = matrix.size();
    int col = matrix[0].size();

        //Create a new matrix to store the result
        vector<int> n(row, 0);
        vector<int> m(col,0);

        for (int i =0; i<row; i++){
            for (int j =0; j<col; j++){
                if(matrix[i][j]==0){
                    n[i]=1;
                    m[j]=1;
                }
            }
        }

        for (int i =0; i<row; i++){
            for (int j =0; j<col; j++){
                if(n[i]==1 || m[j]==1){
                    matrix[i][j] =0;
                }
            }
        }
}

//Optimal Approach
void setzeros(vector<vector<int>> &matrix){

int row = matrix.size();
int col = matrix[0].size();
int col0 =1;

//Mark the first row and first column
for (int i =0; i<row; i++){
    for (int j =0; j<col; j++){
        if(matrix[i][j]==0){
            matrix[i][0]=0;
            matrix[0][j]=0;
            if(j!=0){
                matrix[0][j]=0;
            }else{
                col0 = 0;
            }
        }
    }
}

//Mark the rest of the matrix
for (int i =1; i<row; i++){
    for (int j =1; j<col; j++){
        if (matrix[i][0]==0 || matrix[0][j]==0){
            matrix[i][j]=0;
        }
    }
}

//Mark the first row
if(matrix[0][0]==0){
    for (int j =0; j<col; j++){
        matrix[0][j] =0;
    }
}

//Mark the first column
if(col0==0){
    for (int i=0; i<row; i++){
        matrix [i][0] =0;
    }
}


}



int main(){
    return 0;
}