#include<bits/stdc++.h>
using namespace std;
int power(int base, int exp){
    int ans =1;
    for (int i = 1; i<= exp; i++){
        ans *= base;
    }
    return ans;
}

int main(){
    int base, exp;
    cin>> base >> exp;
    cout<< power(base, exp);
}