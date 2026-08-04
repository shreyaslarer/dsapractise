#include<bits/stdc++.h>


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {

        vector<vector<int>>ans;
        sort(arr.begin(), arr.end());
        for (int i = 0; i<arr.size(); i++){
            //Remove the dupliactes
            if (i>0 && arr[i]==arr[i-1]) continue;
            for (int j =i+1; j<arr.size(); j++){
                //Remove j duplicates
                if (j>i+1 && arr[j]==arr[j-1]) continue;


                //Now apply the two pointers approach for the remaining k and l
                int k = j +1;
                int l = arr.size()-1;

                while(k<l){
                    long long sum = arr[i];
                    sum+=arr[j];
                    sum+=arr[k];
                    sum+=arr[l];

                    if (sum == target){
                        vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                        ans.push_back(temp);
                        k++, l--;

                        //Remove the duplicates of the k & l
                        while(k<l && arr[k]==arr[k-1]) k++;
                        while(k<l && arr[l]==arr[l+1]) l--;
                    }else if (sum<target){
                        k++;
                    }else{
                        l--;
                    }

                }
            }
        }

        return ans;
        
    }
};