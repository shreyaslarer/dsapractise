#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &a){

    //Find the pivot 
    int pivot = -1;
    int n = a.size();
    for (int i = n-2; i>=0; i--){
        if(a[i]<a[i+1]){
            pivot =i;
            break;
        }

    }
    //If pivot does not exist
    if (pivot ==-1){
        reverse(a.begin(),a.end());
        return;
    }

    //Find the next greater element
    for (int i =n-1; i>pivot; i--){
        if(a[i]>a[pivot]){
            swap(a[i], a[pivot]);
            break;
        }
    }

    //reverse elements from pivot+1 to n-1;
    int i =pivot+1;
    int j = n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++, j--;
    }

}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i =0; i<n; i++){
        cin >> a[i];
    }
    nextPermutation(a);
    for (int i =0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}