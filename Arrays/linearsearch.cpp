#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int target){

    // Base case
    if(arr.empty()){
        return -1;
    }

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == target){
            return i;      // Return the index if found
        }
    }

    return -1;             // Element not found
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int index = linearSearch(arr, target);

    if(index != -1){
        cout << "Element found at index: " << index << endl;
    }
    else{
        cout << "Element not found" << endl;
    }

    return 0;
}