class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currcnt = 0;
        int max_ele = 0;
        for (int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                currcnt++;
    
    

            }else{
                //When we hit the zeor we need to claculate the max till there and then we need to begin the fresh
                max_ele = max(max_ele,currcnt);
                currcnt = 0;
            }
        }
        return max(max_ele,currcnt);
    }
};