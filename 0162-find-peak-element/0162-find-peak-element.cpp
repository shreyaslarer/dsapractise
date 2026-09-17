class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        //Peak ele is a ele where its left and right are lesses than its
        //Now in the normal way lets find out the mid ok if if themid+1 ele is smaller than mid we can guess that the peak ele may be the mid ele or it will lie towards the left of the mid
        //Lets apply this 

        int low=0,high=nums.size()-1;
        while(low<high){
            int mid = low+(high-low)/2;
            if(nums[mid]>nums[mid+1]){
                high = mid;
            }else{
                low = mid+1;
            }
        }
        return low;
        
    }
};