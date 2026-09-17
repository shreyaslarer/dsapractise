class Solution {
public:
    int findMin(vector<int>& nums) {

        //Here most of the time the minimum will be in the left half or in the roght half or it will bw exactly in the mid
        //Lets do one thing if low consit of the min element lets store it in the another var and lets eleminate the othe rpart of the left side and move the low to the mid+1;


        int low=0, high = nums.size()-1, ans = INT_MAX;
        while(low<=high){
            int mid = low+(high-low)/2;
            if (nums[low]<=nums[mid]){
                //Lets stor it in the ans
                ans = min(ans, nums[low]);
                //then lets update it 
                low = mid+1;
            }else{
                ans = min(ans, nums[mid]);
                high = mid-1;
            }
        }
        return ans;
        
    }
};