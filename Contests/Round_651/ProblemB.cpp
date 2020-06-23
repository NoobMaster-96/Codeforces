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
    	int n;
    	cin>>n;
    	vector<int> a(2*n);
    	for(int i=0;i<2*n;i++){
    		cin>>a[i];
    	}
        int k=0;
    	vector<bool> vis(2*n,false);
        for(int i=0;i<2*n;i++){
            for(int j=i+1;j<2*n;j++){
                if(!vis[i] && !vis[j] && (a[i]+a[j])%2==0){
                    cout<<i+1<<" "<<j+1<<endl;
                    vis[i] = true;
                    vis[j] = true;
                    k++;
                }
                if(k==n-1){
                    break;
                }
            }
            if(k==n-1){
                    break;
            }
        }
    }
}