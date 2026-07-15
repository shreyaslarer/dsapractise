#include<bits/stdc++.h>
using namespace std;

void leftRotate(vector<int> &arr, int d){

    // Base cases
    if(arr.empty() || arr.size() == 1){
        return;
    }

    // Normalize d
    d = d % arr.size();

    if(d == 0){
        return;
    }

    // Reverse first d elements
    reverse(arr.begin(), arr.begin() + d);

    // Reverse remaining elements
    reverse(arr.begin() + d, arr.end());

    // Reverse the entire array
    reverse(arr.begin(), arr.end());
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int d;
    cin >> d;

    leftRotate(arr, d);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}