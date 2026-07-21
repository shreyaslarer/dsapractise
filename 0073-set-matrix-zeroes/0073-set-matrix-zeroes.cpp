class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
 int row = matrix.size();
        int col = matrix[0].size();

        int col0 = 1;

        // Step 1: Mark the rows and columns
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {

                if (matrix[i][j] == 0) {

                    // Mark the row
                    matrix[i][0] = 0;

                    // Mark the column
                    if (j != 0) {
                        matrix[0][j] = 0;
                    }
                    else {
                        col0 = 0;
                    }
                }
            }
        }

        // Step 2: Update the inner matrix
        for (int i = 1; i < row; i++) {
            for (int j = 1; j < col; j++) {

                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 3: Update the first row
        if (matrix[0][0] == 0) {
            for (int j = 0; j < col; j++) {
                matrix[0][j] = 0;
            }
        }

        // Step 4: Update the first column
        if (col0 == 0) {
            for (int i = 0; i < row; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};