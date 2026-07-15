#include<bits/stdc++.h>
using namespace std;
void rightrotate(vector <int> &arr, int d){
//Base Case 

if (arr.empty() || arr.size() == 1)
return;
d = d%arr.size();
if (d==0)
return;

//First rotate 
reverse(arr.begin(), arr.end()-d);
reverse(arr.end()-d, arr.end());
reverse(arr.begin(), arr.end());
return;

}


int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

     int d;
    cin >> d;

    rightrotate(arr, d);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }


    return 0;
}