//Brute Force Approach

#include<bits/stdc++.h>
using namespace std;

vector <int> findUnion(vector<int> &arr1, vector<int> &arr2){

    //Take set to store the union of two arrays
    set<int> st;

    //Insert all the elements of first array into the set
    for (int i =0; i<arr1.size(); i++){
        st.insert(arr1[i]);
    }

    //Insert all the elements of second array into the set
    for (int i  =0; i<arr2.size(); i++){
        st.insert(arr2[i]);
    }

    //Copy all the elements of set into a vector
    vector<int> ans;
    for (auto it : st){
        ans.push_back(it);
    }

    return ans;

}


int main(){
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);

    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++){
        cin >> arr2[i];
    }

    vector<int> result = findUnion(arr1, arr2);

    for (int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;
}

//Optimal Approach 1
vector<int> findUnion(vector<int> &a, vector<int> &b) {
    int i = 0, j = 0;
    vector<int> ans;

    while (i < a.size() && j < b.size()) {

        if (a[i] <= b[j]) {
            if (ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);
            i++;
        }
        else {
            if (ans.empty() || ans.back() != b[j])
                ans.push_back(b[j]);
            j++;
        }
    }

    while (i < a.size()) {
        if (ans.empty() || ans.back() != a[i])
            ans.push_back(a[i]);
        i++;
    }

    while (j < b.size()) {
        if (ans.empty() || ans.back() != b[j])
            ans.push_back(b[j]);
        j++;
    }

    return ans;
}

//Optimal Approach 2
vector<int> findUnion(vector<int> &arr1, vector<int> &arr2){
    vector<int> ans;
    int i = 0, j = 0;

    while(i<arr1.size() || j<arr2.size()){
        if(arr1[i]<arr2[j]){
            if(ans.empty() || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);

            }
            i++;

        }else if(arr1[i]>arr2[j]){
             if(ans.empty() || ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);

            }
            j++;
        }else{
            if(ans.empty() || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);

            }
            i++;
            j++;
        }


    }

    while(i<arr1.size()){
        if(ans.empty() || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);

            }
            i++;
    }
    while(j<arr2.size()){
        if(ans.empty() || ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);

            }
            j++;
    }
    return ans;
}
