#include<bits/stdc++.h>
using namespace std;

// Brute force approach to find pair with given target sum
vector<int> twoSum(vector<int> &arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == target) {
                return {arr[i], arr[j]};
            }
        }
    }
    return {};
}

//Optimal Approach using two pointers
vector<int> twoSumOptimal(vector<int> &arr, int target) {
   int l =0;
   int r = arr.size()-1;
   while(l<r){
    int sum = arr[l]+arr[r];
    if(sum==target){
        return {arr[l+1], arr[r+1]};
    }else if(sum<target){
        l++;
    }else{
        r--;
    }
   }
   return {};

}

int main() {
    return 0;
}
