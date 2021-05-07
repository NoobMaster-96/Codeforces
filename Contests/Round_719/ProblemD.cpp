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
		vector<int> a(n);
		map<int,int> mp;
		ll ans = 0;
		for(int i=0;i<n;i+=1){
			cin>>a[i];
			int idx = a[i]-i;
			mp[idx] += 1;
			ans += (ll)mp[idx]-1;
		}
		cout<<ans<<endl;
	}
}