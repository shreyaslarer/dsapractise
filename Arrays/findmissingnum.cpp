#include<bits/stdc++.h>
using namespace std;

//Brute force approach
int missingNumber(vector<int> &arr, int n){
    //Travesrse through the given n
    for (int i =1; i<=n; i++){
        bool found = false;
        //Traverse through the given array
        for (int j = 0; j<arr.size(); j++){
            if (arr[j] == i){
                found = true;
                break;

            }
        }
        if (!found){
            return i;
        }
    }
    return -1;
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n-1);
    for (int i = 0; i<n-1; i++){
        cin>>arr[i];
    }
    cout<<missingNumber(arr,n)<<endl;

    return 0;
}

//Better Approach

int missingNumber(vector<int> &arr, int n){
    vector <int> hash (n+1, 0);
    for(int i = 0; i<arr.size(); i++){
        hash[arr[i]] = 1;
    }
    for(int i=1; i<=n; i++){
        if(hash[i]==0){
            return i;
        }
    }
    return -1;
}

//Optimal Approach
int missingNumber(vector<int> &arr, int n){
    int totalSum = ((n*(n+1))/2);
    int arrSum = 0;
    for (int i = 0; i<arr.size(); i++){
        arrSum +=arr[i];
    }
    return totalSum - arrSum;
}

//XOR Approach
int missingNumber(vector<int> &arr, int n){
    int xor1 =0;
    int xor2 =0;
    for (int i =0; i<arr.size(); i++){
        xor2 ^= arr[i];
        xor1^=(i+1);
    }
    xor1^=n;
    return xor1^xor2;
}