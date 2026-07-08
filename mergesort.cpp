#include<bits/stdc++.h>
using namespace std;

// Merge Function
void merge(int arr[], int low, int mid, int high)
{
    // Temporary array to store merged elements
    vector<int> temp;

    // Pointer for left sorted half
    int left = low;

    // Pointer for right sorted half
    int right = mid + 1;

    // Compare elements from both halves
    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements of left half
    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements of right half
    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy merged elements back to original array
    for(int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

// Merge Sort Function
void mergeSort(int arr[], int low, int high)
{
    // Base Case
    if(low >= high)
    {
        return;
    }

    // Find middle index
    int mid = (low + high) / 2;

    // Sort left half
    mergeSort(arr, low, mid);

    // Sort right half
    mergeSort(arr, mid + 1, high);

    // Merge both sorted halves
    merge(arr, low, mid, high);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    // Input array
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Perform Merge Sort
    mergeSort(arr, 0, n - 1);

    // Print sorted array
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}