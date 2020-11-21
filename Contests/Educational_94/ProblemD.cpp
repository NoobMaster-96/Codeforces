#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int
lli dp[3001][3001];

int main(){
	int t;
	cin>>t;
	while(t--){
		lli n;
        cin>>n;
        vector<lli> a(n);
        for(lli i=0;i<n;i++){
            cin>>a[i];
        }
        lli ans = 0;
        memset(dp,0,sizeof(dp));
        for(lli i=0;i<n;i++){
            for(lli j=0;j<=3000;j++){
                if(j!=a[i]){
                    dp[i+1][j]=dp[i][j];
                }
                else{
                    dp[i+1][j]=dp[i][j]+1;
                }
            }
        }
        for(lli j=0;j<n;j++){
            for(lli k=n-1;k>j;k--){
                ans+=((dp[j][a[k]]-dp[0][a[k]])*(dp[n][a[j]]-dp[k+1][a[j]]));
            }
        }
        cout<<ans<<endl;
	}
}