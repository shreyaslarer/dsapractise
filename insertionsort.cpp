#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i =0; i<n; i++){
        cin>>arr[i];
    }

    //Insertion sort
    //outer loop

    for(int i =1; i<n; i++){
        //Store the current element
        int key = arr[i];
        //Store the index of the previous element
        int j = i-1;
        //inner loop
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}