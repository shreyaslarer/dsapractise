#include<bits/stdc++.h>
using namespace std;

//brute Force Algorithm

int maxSubArray1(vector<int> &a){
    int maxSum = INT_MIN;
    for(int i =0; i<a.size(); i++){
        for (int j =i; j<a.size(); j++){
            int curSum = 0;
            for(int k =i ; k<j ; k++){
                curSum+=a[k];

            }
            maxSum = max(maxSum, curSum);}
    }
    return maxSum;
}

//Better Approach
int maxSubArray2(vector<int> &a){
    int maxSum =  INT_MIN;
    for (int i =0; i<a.size(); i++){
        int curSum = 0;
        for (int j =i; j<a.size(); j++){
            curSum+=a[j];
            maxSum = max(maxSum, curSum);
        }
    }
    return maxSum;
}

//Optimal Approach
int maxSubArray3(vector<int> &nums){
    int curSum = 0, maxSum = INT_MIN;
    for (int val :nums){
        curSum+=val;
        maxSum = max(curSum, maxSum);
        if(curSum<0){
            curSum = 0;
        }
    }
    return maxSum;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i =0; i<n; i++){
        cin >> a[i];
    }
    cout << maxSubArray1(a) << endl;
    cout << maxSubArray2(a) << endl;
    cout << maxSubArray3(a) << endl;

    return 0;
}