#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    map<char, int>mp;
    for (int i =0; i<s.size(); i++){
        mp[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char characters;
        cin>>characters;
        cout<<mp[characters]<<endl;
    }
    return 0;
}