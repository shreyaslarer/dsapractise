#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr){

    // If the array has less than 2 elements,
    // second largest doesn't exist.
    if(arr.size() < 2){
        return -1;
    }

    int largest = arr[0];
    int secondLargest = INT_MIN;

    // Start from index 1 because arr[0] is already considered.
    for(int i = 1; i < arr.size(); i++){

        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    // No second largest distinct element found.
    if(secondLargest == INT_MIN){
        return -1;
    }

    return secondLargest;
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << secondLargest(arr) << endl;

    return 0;
}