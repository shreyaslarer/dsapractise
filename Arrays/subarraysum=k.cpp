#include<bits/stdc++.h>
using namespace std;

//Brute force approach to find the single number in an array

int subArray(vector<int> &arr, int k){
    int count =0;
    for (int i = 0; i<arr.size(); i++){
        int sum = 0;
        for (int j = i; j<arr.size(); j++){
            sum+=arr[j];
            if(sum==k){
                count++;
            }
        
        }
    }
    return count;

}

int main(){
    return 0;
}