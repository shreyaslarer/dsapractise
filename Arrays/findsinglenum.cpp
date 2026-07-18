#include<bits/stdc++.h>
using namespace std;

//Brute force approach to find the single number in an array

int findsingle(vector<int> &arr){

    for(int i = 0; i<arr.size(); i++){
        int count = 0;
        for (int j =0; j<arr.size(); j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count ==1){
            return arr[i];
            }
        }
        return -1;
    }


    //Better approach using Hash operation to find the single number in an array

    int findsingle(vector<int> &arr){
        unordered_map<int, int>mp;
        for(int i =0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        for (auto it : mp){
            if (it.second ==1){
                return it.first;
            }
        }
        return -1;
    }

    //Optimal approach using XOR operation to find the single number in an array
    int findsingle(vector<int> &arr){
        int xorr = 0;
        for (int i =0; i<arr.size(); i++){
            xorr = xorr^arr[i];
        }
        return xorr;
    }

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<findsingle(arr)<<endl;
    return 0;
}