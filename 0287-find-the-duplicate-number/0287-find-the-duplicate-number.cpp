class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // Consider the given array as the Linked list
        // Use Floyds Cycle approach (slow/fast pointer approach)
        int slow = nums[0];
        int fast = nums[0];

        // As the both are at the same point there is no  checking condition so
        // use do while

        do {

            // We are using linked list make shure to use pointer like
            // nums[slow] and all
            slow = nums[slow];
            fast = nums[nums[fast]];

        } while (slow != fast);
        slow = nums[0];
        while (slow != fast) {

            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};