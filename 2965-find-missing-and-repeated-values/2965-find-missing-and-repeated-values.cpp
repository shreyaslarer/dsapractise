class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int a, b;
        int n = grid.size();
        int matrixSum = 0;
        int totalSum = 0;
        vector<int> ans;
        unordered_set<int>st;

        //Find the total given matrix sum
        for (int i = 0; i<grid.size(); i++){
            for (int j =0; j<grid.size(); j++){
                matrixSum+=grid[i][j];

        //Find the Repeated number using unordered_set
        if(st.count(grid[i][j])){
            a = grid[i][j];
            ans.push_back(a);
        }
        st.insert(grid[i][j]);


            }
        }


        //Find the Missing  number 

        totalSum = (n*n)*(n*n + 1)/2;
        b = totalSum + a - matrixSum;
        ans.push_back(b);
        return ans;
              
    }
};