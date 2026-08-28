class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;
        
        int ans = 0;
        int l = 0, r = height.size() - 1; // Fixed right pointer
        int lmax = 0, rmax = 0;
        
        while(l < r) {
            lmax = max(lmax, height[l]);
            rmax = max(rmax, height[r]);
            
            if (lmax < rmax) {
                ans += lmax - height[l];
                l++;
            } else { // Added missing braces
                ans += rmax - height[r];
                r--;
            }
        }
        return ans; // Now correctly inside the function
    }
};