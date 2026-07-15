#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &arr){

    // Base cases
    if(arr.empty() || arr.size() == 1){
        return;
    }

    // Find the first zero
    int j = -1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    // No zero found
    if(j == -1){
        return;
    }

    // Move non-zero elements to the front
    for(int i = j + 1; i < arr.size(); i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    moveZeroes(arr);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}