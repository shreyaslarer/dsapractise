// Write a function that returns the sum of the digits of a positive integer.
#include<bits/stdc++.h>
using namespace std;

int sumOfN(int n){
    int cnt = 0;
    while(n>0){
        int ld = n%10;
        cnt = cnt + ld;
        n = n/10;
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    cout<<sumOfN(n)<<endl;
    return 0;
}