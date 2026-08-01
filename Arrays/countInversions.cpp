#include<bits/stdc++.h>
using namespace std;

//Solve it using the merge sort technique
//Left and right half merge half code 

int merge(vector<int> &arr,vector<int> &temp,int mid, int left, int right){
    int i = left;
    int j = mid+1;
    if(i<= mid && j<=right){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
            int count = mid - i + 1;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=right){
        temp.push_back(arr[j]);
        j++;
    }

    //Copy the temp array to original array
    for(int i=left;i<=right;i++){
        arr[i] = temp[i-left];
    }
    return invCount;

    int mergeSort(vector<int> &arr,vector<int> &temp,int left,int right){
        int mid,invCount = 0;
        int mid = (left+right)/2;
        int leftCount = mergeSort(arr, temp, left, mid);
        int rightCount = mergeSort(arr, temp, mid+1, right);
        int mergeCount = merge(arr, temp, mid, left, right);
        return leftCount + rightCount + mergeCount;
    }



int main(){
    return 0;
}