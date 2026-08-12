#include<bits/stdc++.h>
using namespace std;
int main(){
//Input the size of the array
int n;
cin>>n;

//Input the array
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

//Bubble sort
//outer loop for number of passes
for (int i = 0; i<n-1; i++){
//inner loop
for (int j =0; j<n-1; j++){
    if (arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
    }
}
}
 for (int i =0; i<n; i++){
    cout<<arr[i]<<" ";
 }
    return 0;

}