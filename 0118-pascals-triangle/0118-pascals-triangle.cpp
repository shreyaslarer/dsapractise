class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int row =0; row<numRows; row++){
            vector<int> temp;
            long long curr = 1;
            temp.push_back(curr);
            for (int i =0; i<row; i++){
                curr = curr * (row-i)/(i+1);
                temp.push_back(curr);

            }
            ans.push_back(temp);

        }
        return ans;
        
    }
};