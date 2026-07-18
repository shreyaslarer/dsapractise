#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum consecutive 1's
int maximumConsecutiveOnes(vector<int> &arr) {

    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < arr.size(); i++) {

        if (arr[i] == 1) {
            count++;

            if (count > maxCount) {
                maxCount = count;
            }
        }
        else {
            count = 0;
        }
    }

    return maxCount;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << maximumConsecutiveOnes(arr) << endl;

    return 0;
}