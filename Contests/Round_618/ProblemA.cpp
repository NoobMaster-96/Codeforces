#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		int count0 = 0;
		int sum = 0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i] == 0){
				count0++;
			}
			sum += a[i];
		}
		int ans=0;
		if(count0!=0){
			ans += count0;
			sum += count0;
			if(sum == 0){
				ans++;
			}
			cout<<ans<<endl;
		}
		else if(count0 == 0 && sum == 0){
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}
	return 0;
}