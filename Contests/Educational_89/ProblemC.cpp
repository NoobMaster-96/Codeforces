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
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    for(int i=0;i<n;i++){
    	cin>>b[i];
    }
    map<int,int> ma;
    for(int i=0;i<n;i++){
    	ma[a[i]] = i;
    }
    map<int,int> left,right;
    for(int i=0;i<n;i++){
    	int idx = ma[b[i]];
    	if(idx<i){
    		left[i-idx]++;
    		right[n-i+idx]++;
    	}
    	else if(i==idx){
    		left[0]++;
    		right[0]++;
    	}
    	else{
    		right[idx-i]++;
    		left[i+n-idx]++;
    	}
    }
    int ans = 0;
    for(auto i:left){
    	ans = max(ans,i.second);
    }
    for(auto i:right){
    	ans = max(ans,i.second);
    }
    cout<<ans<<endl;
}