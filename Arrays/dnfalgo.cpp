#include<bits/stdc++.h>
using namespace std;

void dutchNationalFlag(vector<int> &a){
    int low =0, mid=0,  high=a.size()-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[mid], a[low]);
            mid++;
            low++;
        }else if(a[mid]==1){
            mid++;
        }else if(a[mid]==2){
            swap(a[mid],a[high]);
            high--;
        }

    }
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i =0; i<n; i++){
        cin >> a[i];
    }
    dutchNationalFlag(a);
    for (int i =0; i<n; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}