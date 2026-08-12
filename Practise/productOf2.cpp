//Product of 2 Numbers without using * operator.
#include<bits/stdc++.h>
using namespace std;

int productOf2(int a, int b){
    //Var to strore the product of 2 numbers
    int sum = 0;

    for(int i =0; i<b; i++){
        sum = sum + a;
    }
    return sum;
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<productOf2(a, b)<<endl;
    return 0;
}