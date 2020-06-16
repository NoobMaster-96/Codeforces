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
    	int a,b;
        cin>>a>>b;
        if(a==0 || b==0){
            cout<<0<<endl;
            continue;
        }
        if(a==b){
            int ans = (a/3)*2;
            cout<<ans<<endl;
            continue;
        }
        if(a>b){
            int ans = 0;
            if(b>=a/2){
                ans += b;
                b -= a/2;
            }
            if(b>0){}
        }
    }
}