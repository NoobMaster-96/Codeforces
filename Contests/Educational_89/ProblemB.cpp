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
    	int n,x,m;
        cin>>n>>x>>m;
        int ans = 1;
        int curl = x, curr = x;
        for(int i=0;i<m;i++){
            int l,r;
            cin>>l>>r;
            if(r>=curl || l<=curr){
                if(l<curl && r>=curl){
                    ans += (curl-l);
                    curl = l;
                }
                if(r>curr && l<=curr){
                    ans += (r-curr);
                    curr = r;
                }
            }
        }
        cout<<ans<<endl;
    }
}