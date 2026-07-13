//Brute Force Approach
#include<bits/stdc++.h>
using namespace std;   
int main(){
    int n;
    cin>>n;
    vector <int >arr(n);
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    set <int>st;
    for (int i=0; i<n; i++){
        st.insert(arr[i]);
    }
    for(int x : st){
        cout<<x<<" ";
    }
    return 0;
}

//Optimal Approach
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr){
    //Base case

    if(arr.empty()){
        return 0;
    }
//Two pointer approach
    int i =0;
    int j =1;
    while(j<arr.size()){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
        j++; 
}
    return i+1;
}

int main(){
    int n;
    cin>>n;
    vector <int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }   
    int newSize = removeDuplicates(arr);
    for(int i=0; i<newSize; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}