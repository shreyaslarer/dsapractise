class Solution {
public:

   //Lets use the recursion and backtracking
        //While we are  doing recursion lets perform the swapping b/w the elements
        //After that while we are backtraing right we need tto again bring the elemets to their original position 
        //Returm them


        //Create a fun
    void permutation(vector<int> &nums, int idx, vector<vector<int>>&ans){
        //Base case 
        if (idx == nums.size()){
            ans.push_back({nums});
            return;
        }

        for (int i = idx; i<nums.size(); i++){
            //Recursion Swapping
            swap(nums[idx], nums[i]);
            permutation(nums, idx+1, ans);
            //Backtrack reverse all the ele to original position
            swap(nums[idx], nums[i]);
        }


    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        permutation(nums, 0, ans);
        return ans;
     
               
    }
};