class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        //Lets store the ans in the arr
        int n = nums.size();
        vector<int> ans(n);
        ans[0] = 1;

        //lets apply the prefix sum here first we will claculate from left to roght and then from roght to left 

        for (int i = 1; i<n; i++){
            //Lets store the left preftix ans in the ans
            ans[i] = ans[i-1]*nums[i-1];
        }

        //Lets start processing from right to the left
        int rightprod = 1;
        for (int i = n-1; i>=0; i--){
            //First we will muktiply thw lredy stored ans in the ans arr with the rightprod
            ans[i] *= rightprod;

            //Next we wneed to update the rightprod
            rightprod *= nums[i];
        }

        return ans;
        
    }
};