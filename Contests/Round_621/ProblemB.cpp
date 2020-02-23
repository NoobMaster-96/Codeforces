#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int ans = 0;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i] == x){
				ans = 1;
			}
		}
		sort(a.begin(),a.end());
		if(ans == 1){
			cout<<ans<<endl;
			continue;
		}
		if(x < a[n-1]){
			cout<<2<<endl;
			continue;
		}
		ans = x/a[n-1];
		if(x%a[n-1] != 0){
			ans++;
		}
		cout<<ans<<endl;
	}
}