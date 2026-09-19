class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        //First thing the matrix is sorted in row wise not in the column wise
        //Soeted means we can apply BS
        //Here first we need to appply BS on the rows to find the exact row where the target lies
        //Then we need to apply the BS on the row that we get

        //So the apply of BS on row will take log(row) and after on the col we will get log(col) that is log(row*col)

        int m = matrix.size();
        int n = matrix[0].size();

        int top = 0, bottom=m-1,row=-1;

        while(top<=bottom){
            int mid=top+(bottom-top)/2;

            if(matrix[mid][0]<=target && target<= matrix[mid][n-1]){
                row = mid;
                break;
            }else if(target<matrix[mid][0]){
                bottom = mid-1;
            }else{
                top = mid+1;
            }
        }
        if(row==-1) return false;
        int low=0, high=n-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(matrix[row][mid]==target)return true;
            else if(matrix[row][mid]<target) low = mid+1;
            else high = mid-1;
        }return false;
        
    }
};