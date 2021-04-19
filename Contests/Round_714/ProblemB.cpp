#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define mod 1000000007

ll modper(ll  n){
	ll ans = 1;
	for(ll i=2;i<=n;i+=1){
		ans = (ans*i)%mod;
	}
	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		int cnt0 = 0, cnt1 = 0, cnto = 0;
		for(int i=0;i<n;i+=1){
			cin>>a[i];
			if(a[i]==0){
				cnt0+=1;
			}
			else if(a[i]==1){
				cnt1+=1;
			}
			if((a[i]&1)==1){
				cnto+=1;
			}
		}
		sort(a.begin(),a.end());
		if(a[0]==a[n-1]){
			cout<<modper((ll)n)<<endl;
			continue;
		}
		if(cnt0>=2){
			ll ans = ((((ll)cnt0*(ll)(cnt0-1))%mod*(modper((ll)(n-2))))%mod);
			cout<<ans<<endl;
			continue;
		}
		if(cnt1>=2 && cnto==n){
			ll ans = ((((ll)cnt1*(ll)(cnt1-1))%mod*(modper((ll)(n-2))))%mod);
			cout<<ans<<endl;
			continue;
		}
		cout<<0<<endl;
	}
}