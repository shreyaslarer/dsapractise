#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, vector<int> &b, int n, int m) {

    int idx = n + m - 1;
    int i = n - 1;
    int j = m - 1;

    while (i >= 0 && j >= 0) {

        if (a[i] >= b[j]) {
            a[idx] = a[i];
            i--;
        }
        else {
            a[idx] = b[j];
            j--;
        }

        idx--;
    }

    while (j >= 0) {
        a[idx] = b[j];
        idx--;
        j--;
    }
}

int main() {

    int n, m;
    cin >> n >> m;

    // nums1 has space for n + m elements
    vector<int> arr1(n + m);
    vector<int> arr2(m);

    // Read only the first n valid elements
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    // Read nums2
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    merge(arr1, arr2, n, m);

    for (int i = 0; i < n + m; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}