#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
    	string s;
        cin>>s;
        int n = s.length();
        if(n==2){
            cout<<s<<endl;
            continue;
        }
        string ans = "";
        ans += s[0];
        for(int i=1;i<n;i+=2){
            ans += s[i];
        }
        cout<<ans<<endl;
    }
}