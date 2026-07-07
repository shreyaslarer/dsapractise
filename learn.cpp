#include <bits/stdc++.h>
using namespace std;
void pattern1(int n){
for (int i = 1; i<=n; i++){
    for (int j =1; j<=(n-i+1); j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
}

void pattern2(int n){
for (int i = 1; i<= n; i++){
    for (int j = 1; j<=(n-i+1); j++){
        cout<<i<<" ";
    }
    cout<<endl;
}
}

void pattern3(int n){
for (int i = 1; i<= n; i++){
    for (int j = 1; j<=(n-i+1); j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
}

void pattern4(int n){
    for (int i = 0; i<n; i++){
        for(int j =0; j<=n; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for (int i =1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


void pattern6(int n){
    for (int i =1; i<=n; i++){
    //space
    for (int j = 1; j<=n-i; j++){
        cout<<" ";

    }
    //star
    for (int j =1; j<=2*i-1; j++){
        cout<<"*";
    }
    //space
    for (int k = 1; k<= n-i; k++){
        cout<<" ";
    }
    cout<<endl;
}
}

void pattern7(int n){
    for (int i = 1; i <= n; i++){
        //space
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        //star
        for (int j = 1; j <= 2 * (n - i) + 1; j++){
            cout << "*";
        }
        //space
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
 pattern1(5);
 pattern2(5);
 pattern3(5);
 pattern4(5);
 pattern5(5);
 pattern6(9);
 pattern7(5);
    return 0;
}