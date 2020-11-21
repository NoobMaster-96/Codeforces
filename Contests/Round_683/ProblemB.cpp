#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> grid(n,vector<int>(m));
        int neg_cnt = 0;
        int abs_min = 101;
        int abs_sum = 0;
        for(int i=0;i<n;i+=1){
            for(int j=0;j<m;j+=1){
                cin>>grid[i][j];
                abs_sum += abs(grid[i][j]);
                abs_min = min(abs_min,abs(grid[i][j]));
                if(grid[i][j]<0){
                    neg_cnt+=1;
                }
            }
        }
        int ans;
        if(neg_cnt%2==0){
            ans = abs_sum;
        }
        else{
            ans = abs_sum - (2*abs_min);
        }
        cout<<ans<<endl;
    }
}