#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	lli t;
	cin>>t;
	while(t--){
		lli n;
		cin>>n;
		vector<lli> a(n+1),b(n+1);
		for(lli i=1;i<=n;i++){
			cin>>a[i]>>b[i];
		}
		lli ans = 0;
		for(lli i=1;i<=n;i++){
			if(i<n){
				if(b[i]<a[i+1]){
					ans += a[i+1]-b[i];
					a[i+1] = b[i];
				}
			}
			if(i==n){
				if(b[i]<a[1]){
					ans += a[1]-b[i];
					a[1] = b[i];
				}
			}
		}
		lli num = a[1];
		for(lli i=2;i<=n;i++){
			num = min(num,a[i]);
		}
		ans += num;
		cout<<ans<<endl;
	} 
}