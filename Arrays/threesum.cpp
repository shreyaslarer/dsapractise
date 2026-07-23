#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &arr,){
    set<vector<int>>st;
    for (int i =0; i<arr.size(); i++){
        for(int j =i+1; j<arr.size(); j++){
            for (int k =j+1; k<arr.size(); k++){
                if (arr[i] +arr[j]+arr[k]==0){
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
}
    vector<vector<int>> result(st.begin(), st.end());
    return result;
}
int main(){
    return 0;
}