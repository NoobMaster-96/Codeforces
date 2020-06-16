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
    	vector<int> a(n);
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    	}
    	vector<int> state(n);
        state[0] = 0;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]>0){
                state[i] = 1;
            }
            else{
                state[i] = -1;
            }
        }
        state[0] = state[1];
        vector<int> ans;
        ans.push_back(a[0]);
        for(int i=1;i<n-1;i++){
            if(state[i]!=state[i+1]){
                ans.push_back(a[i]);
            }
        }
        ans.push_back(a[n-1]);
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}