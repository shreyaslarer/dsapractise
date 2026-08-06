class Solution {
public:
    void moveZeroes(vector<int>& arr) {

        int j =  0;
        for(int i =0; i<arr.size(); i++){
            if (arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
        }

    //     // Base Case:
    //     // If the array is empty or contains only one element,
    //     // no shifting is required.
    //     if (arr.empty() || arr.size() == 1) {
    //         return;
    //     }

    //     // Step 1: Find the index of the first zero.
    //     int j = -1;
    //     for (int i = 0; i < arr.size(); i++) {
    //         if (arr[i] == 0) {
    //             j = i;
    //             break;
    //         }
    //     }

    //     // Step 2: If there are no zeros in the array,
    //     // the array is already in the desired state.
    //     if (j == -1) {
    //         return;
    //     }

    //     // Step 3: Traverse the remaining array.
    //     // Whenever a non-zero element is found,
    //     // swap it with the zero at index j.
    //     for (int i = j + 1; i < arr.size(); i++) {
    //         if (arr[i] != 0) {
    //             swap(arr[i], arr[j]);

    //             // Move j to the next zero position.
    //             j++;
    //         }
    //     }
    // }
    }
};