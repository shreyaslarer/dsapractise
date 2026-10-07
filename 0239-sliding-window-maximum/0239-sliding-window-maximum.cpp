class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        ///Here we are using the dqueue cocncept where for the frontel removal we are taking the help of the index ad the k for the backward removal we will take the help of the values

        vector<int>result(nums.size()-k+1);
        deque<int>dq;\
        for(int i =0; i<nums.size(); i++){
            //frontal removal
            while(!dq.empty() && dq.front()<=i-k){
                dq.pop_front();
            }
            //backward removal
            while(!dq.empty() && nums[dq.back()]<nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);

            if(i>=k-1){
                result[i-k+1]=nums[dq.front()];
            }
        }
        return result;
        
    }
};