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

//Without using the reverse function, we can implement the left rotation of an array by using a temporary array to store the rotated elements. Here's how you can do it:
void reverseArray(vector<int> &arr, int start, int end){
while(start <= end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
}
}