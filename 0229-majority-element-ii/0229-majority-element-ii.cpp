class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {

        int ele1 = INT_MIN, ele2 = INT_MIN;
        int freq1 = 0, freq2 = 0;

        // Step 1: Find the potential candidates
        for (int i = 0; i < arr.size(); i++) {

            if (freq1 == 0 && arr[i] != ele2) {
                ele1 = arr[i];
                freq1 = 1;
            }
            else if (freq2 == 0 && arr[i] != ele1) {
                ele2 = arr[i];
                freq2 = 1;
            }
            else if (arr[i] == ele1) {
                freq1++;
            }
            else if (arr[i] == ele2) {
                freq2++;
            }
            else {
                freq1--;
                freq2--;
            }
        }

        // Step 2: Verify the candidates
        freq1 = 0;
        freq2 = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == ele1) {
                freq1++;
            }
            else if (arr[i] == ele2) {
                freq2++;
            }
        }

        // Step 3: Store the answer
        vector<int> ans;

        if (freq1 > arr.size() / 3) {
            ans.push_back(ele1);
        }

        if (freq2 > arr.size() / 3) {
            ans.push_back(ele2);
        }

        return ans;
    }
};