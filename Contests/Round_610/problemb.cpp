#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,p,k;
		cin>>n>>p>>k;
		vector<int> goods(n);
		for(int i=0; i<n; i++){
			cin>>goods[i];
		}
		sort(goods.begin(),goods.end());
		vector<int> dp(n+1);
		int ans = 0;
		for(int i=1;i<n+1;i++){
			if(i-k>=0){
				dp[i] = min(dp[i-1]+goods[i-1],dp[i-k]+goods[i-1]);
			}
			else{
				dp[i] = dp[i-1] + goods[i-1];
			}
			if(dp[i]<=p){
				ans = max(ans,i);
			}
			//cout<<dp[i]<<" ";
		}
		cout<<ans<<endl;
	}	
}