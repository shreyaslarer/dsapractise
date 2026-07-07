#include<bits/stdc++.h>
using namespace std;
int main(){

    //input the numbers 
    int n;
    cin>>n;

    //push the inputs to the arrar
    
    int arr[n];
    for (int i =0; i<n; i++){
        cin>>arr[i];
    }
    
    //create a has table and inetialize the entire table with 0
    int hash[100] = {0};
    for (int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    //readt the nummber of entries fromm the interviewer

    int query;
    cin>> query;
     cout<< hash[query]<<endl;

    return 0;

}