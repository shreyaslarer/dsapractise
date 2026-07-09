#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){

    // Pivot element
    int pivot = arr[low];
    //Intetilaize the array with the pointers tot traverse to it i and j
    int i = low;
    int j = high;

    while(i<j){
        //Operations of the i in the array
        while(arr[i] <= pivot && i<j){
            i++;
        }
        //Operations of the j in the array
        while(arr[j] > pivot && i<=j){
            j--;
        }
        //Swap the elements in the array
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }

    //After performing all of the operations we need to place the pivote in it's position
    swap(arr[low], arr[j]);
    return j;
}


void quicksort(int arr[], int low, int high){
    if(low < high){
        //Get the pivot index after partitioning the array
        int pindex = partition(arr, low, high);
        //Sort the left sub arrar
        quicksort(arr, low, pindex-1);
        //sort the right sub array
        quicksort(arr, pindex+1, high);

    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    quicksort(arr, 0, n-1);
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}