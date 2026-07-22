class Solution {
public:
    void nextPermutation(vector<int>& a) {

        int pivot = -1;
        int n = a.size();

        // Find the pivot
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] < a[i + 1]) {
                pivot = i;
                break;
            }
        }

        // If no pivot exists
        if (pivot == -1) {
            reverse(a.begin(), a.end());
            return;
        }

        // Find the next greater element
        for (int i = n - 1; i > pivot; i--) {
            if (a[i] > a[pivot]) {
                swap(a[i], a[pivot]);
                break;
            }
        }

        // Reverse the suffix
        reverse(a.begin() + pivot + 1, a.end());
    }
};