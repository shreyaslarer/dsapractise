#include<bits/stdc++.h>
using namespace std;

int sortedArray(vector <int> &arr){
    for (int i = 1; i< arr.size(); i++){
        if(arr[i] < arr[i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i = 0; i < n; i++){
       cin>>arr[i];
   }
   cout<<sortedArray(arr)<<endl;
    return 0;
}