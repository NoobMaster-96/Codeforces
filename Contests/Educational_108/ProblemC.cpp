#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> u(n);
		vector<int> s(n);
		vector<int> us[n+1];
		vector<ll> sm(n+1,0);
		vector<ll> ans(n+1,0);
		for(int i=0;i<n;i+=1){
			cin>>u[i];
		}
		for(int i=0;i<n;i+=1){
			cin>>s[i];
		}
		for(int i=0;i<n;i+=1){
			us[u[i]].push_back(s[i]);
		}
		for(int i=1;i<=n;i+=1){
			sort(us[i].begin(),us[i].end(),greater<int>());
			for(int x:us[i]){
			//	cout<<x<<" ";
			}
			//cout<<endl;
			int len = us[i].size();
			for(int j=0;j<len;j+=1){
				sm[j+1] = sm[j]+us[i][j];
			//	cout<<sm[j+1]<<" ";
			}
			//cout<<endl;
			for(int j=1;j<=len;j+=1){
				ans[j] += sm[len-(len%j)];
				//cout<<ans[j]<<" ";
			}
			//cout<<endl;
		}
		for(int i=1;i<=n;i+=1){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}