#include<bits/stdc++.h>
using namespace std;

vector<int> findIntersection(vector<int> &arr1, vector<int> &arr2)
{
vector<int>ans;
int i=0;
int j =0;
while(i<arr1.size() && j<arr2.size()){
if(arr1[i]<arr2[j]){
    i++;
}
else if(arr1[i]>arr2[j]){
    j++;
}
else{
    ans.push_back(arr1[i]);
    i++;
    j++;
}
}

return ans;


}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int> arr1(n1), arr2(n2);
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }
    vector<int> result = findIntersection(arr1, arr2);
    for(int x : result){
        cout<<x<<" ";
    }
    return 0;
}