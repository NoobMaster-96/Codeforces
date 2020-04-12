#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	lli t;
	cin>>t;
	while(t--){
		lli n,x;
		cin>>n>>x;
		vector<lli> a(n);
		for(lli i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end(),greater<int>());
		vector<lli> sum(n);
		sum[0] = a[0];
		lli ans = 0;
		if(a[0]>=x){
			ans++;
		}
		for(lli i=1;i<n;i++){
			sum[i] = a[i]+sum[i-1];
			if(sum[i]/(i+1)>=x){
				ans++;
			}
			else{
				break;
			}
		}
		cout<<ans<<endl;
	}
}