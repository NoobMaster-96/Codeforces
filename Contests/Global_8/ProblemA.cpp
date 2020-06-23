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
    	int a,b,n;
        cin>>a>>b>>n;
        int ans = 0;
        while(a<=n && b<=n){
            if(a<b){
                a += b;
            }
            else{
                b += a;
            }
            ans++;
        }
        cout<<ans<<endl;
    }
}