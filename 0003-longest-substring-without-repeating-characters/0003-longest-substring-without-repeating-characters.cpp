class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int left = 0, maxLen = 0;
        unordered_map<char, int>mp;

        for (int right = 0; right < s.size(); right++){
            if(mp.count(s[right])){
                left = max(left, mp[s[right]]+1);
            }
            mp[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);

        }
        return maxLen;
        
    }
};