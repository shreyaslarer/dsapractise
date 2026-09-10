class Solution {
public:
    int search(vector<int>& nums, int target) {

//Here the question is simple ok we will gwt a sorted array but it will be rotated in some part 
//Lets appply the binary search as we got to know that it is sorted
//After applying we will check is it present in the left sode or in the right side 
//Just play with the low mid and high
//Try to eleminate the left or right part 

    int low = 0, high = nums.size()-1;
    while (low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==target) return mid;
        //Lets check on the left side is the target available 
        if(nums[low]<=nums[mid]){
            if(nums[low]<=target && target<=nums[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }else{
            if(target>=nums[mid] && target<=nums[high]){
                low = mid+1;
            }else{

                high = mid-1;
            }
        }
    }
    return -1;

        
    }
};