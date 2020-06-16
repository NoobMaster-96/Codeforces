#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    vector<int> a(n);
    vector<bool> vis(n+1,false);
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    vector<int> ans(n,-1);
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            ans[i+1] = a[i];
            vis[a[i]] = true;
        }
    }
    vis[a[n-1]] = true;
    int i=0,j=0;
    while(i<n){
        if(ans[i]==-1){
            while(vis[j]){
                j++;
            }
            vis[j] = true;
            ans[i] = j;
        }
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}