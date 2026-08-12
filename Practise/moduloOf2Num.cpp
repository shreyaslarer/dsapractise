#include<bits/stdc++.h>
using namespace std;

int moduloOf2(int a, int b){
    int ans = a;
    while(ans>=b){
        ans = ans - b;
    }
    return ans;
}

int main(){
int a, b;
cin>>a>>b;
cout<<moduloOf2(a, b)<<endl;
    return 0;
}