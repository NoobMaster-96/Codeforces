#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

ll find(vector<ll>& a, vector<vector<ll>>& dp, int l, int r){
	if(dp[l][r] != -1){
		return dp[l][r];
	}
	if(l==r){
		return 0;
	}
	return dp[l][r] = a[r]-a[l] + min(find(a,dp,l+1,r),find(a,dp,l,r-1));
}
int main(){
	int n;
	cin>>n;
	vector<ll> a(n);
	for(int i=0;i<n;i+=1){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	vector<vector<ll>> dp(n,vector<ll>(n,-1));
	cout<<find(a,dp,0,n-1);
}