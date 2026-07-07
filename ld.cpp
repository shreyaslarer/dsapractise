#include<bits/stdc++.h>
using namespace std;

void countname(int i, int n){
        cout<<"Arer"<<endl;

    if (i>=n){
        return;
    }
    countname(i+1, n);

}


void countnum(int i, int n){
    if (i>n){
        return;
    }
    cout<<i<<endl;
    countnum(i+1, n);
}

void revnum(int i, int n){
    if(i<n){
        return;
    }
    cout<<i<<endl;
    revnum(i-1,n);
}

int sumofN(int n){
    if(n==0){
        return 0;
    }
    return n + sumofN(n-1);
}


int factofN(int n){
    if (n==0){
        return 1;
    }
    return n * factofN(n-1);
}

void reverseanarray(int arr[], int l, int r){
    if (l>=r){
        return;
    }
    swap(arr[l], arr[r]);
    reverseanarray(arr,l+1, r-1);
}

int fibonacinum(int  n){
    if (n<=1){
        return n;
    }
    return fibonacinum(n-1) + fibonacinum(n-2);
}

int main(){
    // int n;
    // cin>>n;
    // int arr[] = {'M', 'A', 'D', 'H', 'A', 'M'};
    // countname(0,n);
    // countnum(1,n);
    // revnum(n,1);
    // cout<<sumofN(n)<<endl;
    // cout<<factofN(n)<<endl;
    // reverseanarray(arr, 0, 5);
    // for(int i=0; i<6; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    cout<<fibonacinum(4)<<endl;

}
