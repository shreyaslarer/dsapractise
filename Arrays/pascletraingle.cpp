#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pascaleTri(int n){

    vector<vector<int>> ans;

    for(int row = 0; row < n; row++){

        vector<int> temp;

        long long curr = 1;
        temp.push_back(curr);

        for(int i = 0; i < row; i++){

            curr = curr * (row - i) / (i + 1);
            temp.push_back(curr);

        }

        ans.push_back(temp);
    }

    return ans;
}


//varient 2
vector<int> getRow(int row){
    vector<int> temp;
    long long curr =1;
    temp.push_back(curr);
    for (int i =0; i<row; i++){
        curr = curr*(row -i);
        curr = curr/(i +1);
        temp.push_back(curr);
    }
    return temp;
}


int main(){

    int n;
    cin >> n;

    vector<vector<int>> ans = pascaleTri(n);

    for(auto row : ans){

        for(auto val : row){
            cout << val << " ";
        }

        cout << endl;
    }

    return 0;
}