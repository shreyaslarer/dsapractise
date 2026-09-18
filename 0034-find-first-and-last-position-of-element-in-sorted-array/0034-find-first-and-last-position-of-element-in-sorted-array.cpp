class Solution {
public:

    int first(vector<int>&nums, int target){
        int low = 0, high=nums.size()-1,ans=-1;
        while(low<=high){
            int mid = low+(high-low)/2;

            if(nums[mid]==target){
                ans = mid;
                high = mid-1;
            }else if(nums[mid]<target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return ans;


    }

//Second part
    int second(vector<int>&nums, int target){
        int low = 0, high=nums.size()-1,ans=-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]==target){
                ans = mid;
                low=mid+1;
            }else if(nums[mid]<target){
                low = mid+1;
            }else {
                high = mid-1;
            }
        }
        return ans;


    }

    vector<int> searchRange(vector<int>& nums, int target) {

        //Here simplle as it is sorted lets apply the Binary Search 
        //Before that we can easily find out the any one taget position first it may be first or secong
        //If it lies in the first then it will be in left vise versa 
        //Create 2 seperate functions and then return both at the end
        return{first(nums,target),  second(nums,target)};
        
    }
};