#include<bits/stdc++.h>
using namespace std; 

void rotate(vector<vector<int>>& matrix){
    for (int i = 0; i<matrix.size(); i++){
        for (int j = i+1; j<matrix.size(); j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i =0; i<matrix.size(); i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }

}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i =0; i<n; i++){
        for (int j =0; j<n; j++){
            cin >> matrix[i][j];
        }
    }   
    rotate(matrix);
    for (int i =0; i<n; i++){
        for (int j =0; j<n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}