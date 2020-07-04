#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int grid[300][300];

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--){
		int n,k;
        cin>>n>>k;
        memset(grid,0,sizeof(grid));
        if(k==0){
            cout<<0<<endl;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<grid[i][j];
                }
                cout<<endl;
            }
            continue;
        }
        int ans;
        if(k%n==0){
            ans = 0;
            int a = k/n;
            int s = 0;
            for(int i=0;i<n;i++){
                for(int j=0;j<a;j++){
                    int idx = (s+j)%n;
                    grid[i][idx] = 1;
                }
                s++;
            }
        }
        else{
            ans = 2;
            int a = k/n;
            int r = k%n;
            int s = 0;
            for(int i=0;i<n;i++){
                for(int j=0;j<a;j++){
                    int idx = (s+j)%n;
                    grid[i][idx] = 1;
                }
                s++;
            }
            int e = a;
            for(int i=0;i<r;i++){
                grid[i][e] = 1;
                e = (e+1)%n;
            }
        }
        cout<<ans<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<grid[i][j];
            }
            cout<<endl;
        }
	}
}