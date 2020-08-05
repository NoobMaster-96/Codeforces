#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ans = "";
        int x = ceil(n/4.0);
        for(int i=x;i<n;i++){
            ans += '9';
        }
        for(int i=0;i<x;i++){
            ans += '8';
        }
        cout<<ans<<endl;
    }
}