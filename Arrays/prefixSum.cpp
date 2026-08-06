#include<bits/stdc++.h>
using namespace std;

//Find all the prefix sum of an array

vector<int> egprefix(const vector<int>& arr){
    vector<int> prefix;

int sum =0;
for(int i = 0; i<arr.size(); i++){
    sum+=arr[i];
    prefix.push_back(sum);

    }
    return prefix;
}

int rangeSum(vector<int> &prefix, int l, int r){
if (l==0){
    return prefix[r];
}
    else{
        return prefix[r] - prefix[l-1];
    }
}



int main(){
    vector<int> arr = {1,2,3,4,5};
    vector<int> prefix = egprefix(arr);
    cout<<rangeSum(prefix, 1,3);
    return 0;
}
