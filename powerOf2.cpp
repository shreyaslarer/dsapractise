#include<bits/stdc++.h>
using namespace std;

int powerOf2(int a, int b){
    //Always start form the 1 bcz if we start form the 0 ment we will get the answer as 0
    int ans = 1;
    for(int i =0; i<b; i++){
        ans = ans *a;
    }
    return ans;

}

int main(){
int a, b;
cin>>a>>b;
cout<<powerOf2(a, b)<<endl;
    return 0;
}