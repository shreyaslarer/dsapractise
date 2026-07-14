// Write a function to perform integer division without using the / operator.
#include<bits/stdc++.h>
using namespace std;
int integerDivision(int a, int b){
    int ans = a;
    int count = 0;
    while (ans >= b){
        ans  = ans - b;
        count++;
    }
    return count;
}
    int main(){
        int a, b;
        cin>>a>>b;
        cout<<integerDivision(a, b)<<endl;
        return 0;
    }