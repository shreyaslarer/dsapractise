class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        //Base case 
        if (k<=1) return 0;

        int left =0;
        int count = 0;
        int prod = 1;//It is product we cant take 0

        for (int right = 0; right<nums.size(); right++){
            prod *= nums[right];

            while(prod>=k){
                prod /= nums[left];
                left++;
            }
            count += right-left+1;

        }
        return count;
        
    }
};