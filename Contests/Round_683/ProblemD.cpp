#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    a = " "+a;
    b = " "+b;
    int dp[n+1][m+1];
    dp[0][0] = 0;
    int ans = 0;
    memset(dp,0,sizeof(dp));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i && j && a[i] == b[j]){
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 2);
            }
            if(i){
                dp[i][j] = max(dp[i][j], dp[i - 1][j] - 1);
            }
            if(j){
                dp[i][j] = max(dp[i][j], dp[i][j - 1] - 1);
            }
            ans = max(ans, dp[i][j]);
        }
    }
    cout<<ans;
}
