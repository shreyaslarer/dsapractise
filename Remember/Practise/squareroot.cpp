//Write a function that returns the integer square root of a positive integer.

#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n){
    int i = 1;
    while(i*i <= n){
        i++;
    }
    return i - 1;
}

int main(){
    int n;
    cin>>n;
    cout<<squareRoot(n)<<endl;
    return 0;
}