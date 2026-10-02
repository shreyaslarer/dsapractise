class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        //Look here the problem says that we need to find the max ones but but wherever there is zero we need o flip and convert that zeros to ones for the given k ties like k = 2 means we need to take two zeros as single single ones 

        //lets take two things to track one is maxones and the other is zeros 
        //When ever we get the zeros thet is <=k we neeed to update the maxones but when we reach the >=k then we need to reduce the left side

        int l=0,r=0,maxones=0,zeros=0;

        //lets move the r and lets tarck the zeros
        for (int r =0; r<nums.size(); r++){
            if(nums[r]==0){
                zeros++;
            }
            while(zeros>k){
                if(nums[l]==0){
                    zeros--;
                }
                l++;
            }
                maxones = max(maxones,r-l+1);

            }

     return maxones;   
    }
};