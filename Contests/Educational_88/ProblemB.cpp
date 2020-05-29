#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		vector<string> pav(n);
		for(int i=0;i<n;i++){
			cin>>pav[i];
		}
		int ans = 0;
		for(int i=0;i<n;i++){
			int num = 0;
			for(int j=0;j<m;j++){
				if(pav[i][j]=='.'){
					num++;
				}
				else{
					if(y<2*x){
						ans += y*(num/2);
						ans += x*(num%2);
					}
					else{
						ans += x*num;
					}
					num = 0;
				}
			}
			if(y<2*x){
				ans += y*(num/2);
				ans += x*(num%2);
			}
			else{
				ans += x*num;
			}
		}
		cout<<ans<<endl;
	}
}