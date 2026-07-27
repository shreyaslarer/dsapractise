class Solution {
public:

    bool searchRow(vector<vector<int>>& mat, int target, int row) {

        int n = mat[0].size();
        int st = 0;
        int ed = n - 1;

        while (st <= ed) {

            int mid = st + (ed - st) / 2;

            if (target == mat[row][mid]) {
                return true;
            }
            else if (target > mat[row][mid]) {
                st = mid + 1;
            }
            else {
                ed = mid - 1;
            }
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {

        int m = mat.size();
        int n = mat[0].size();

        int stRow = 0;
        int edRow = m - 1;

        while (stRow <= edRow) {

            int midRow = stRow + (edRow - stRow) / 2;

            if (target >= mat[midRow][0] &&
                target <= mat[midRow][n - 1]) {

                return searchRow(mat, target, midRow);
            }
            else if (target > mat[midRow][n - 1]) {
                stRow = midRow + 1;
            }
            else {
                edRow = midRow - 1;
            }
        }

        return false;
    }
};