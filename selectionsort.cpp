#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Input the array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++)
    {
        // Stores the index of the smallest element
        // in the current unsorted part
        int minIndex = i;

        // Traverse the remaining unsorted array
        for (int j = i + 1; j < n; j++)
        {
            // If a smaller element is found,
            // update its index
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Place the smallest element
        // at its correct position
        swap(arr[i], arr[minIndex]);
    }

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}