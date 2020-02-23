#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		vector<int> a(3);
		int ans = 0;
		for(int i=0;i<3;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end(),greater<int>());
		for(int i=0;i<3;i++){
			if(a[i]!=0){
				ans++;
				a[i]--;
			}
		}
		for(int i=0;i<2;i++){
			for(int j=i+1;j<3;j++){
				if(a[i]!=0 && a[j]!=0){
					ans++;
					a[i]--;
					a[j]--;
				}
			}
		}
		if(a[0]!=0 && a[1]!=0 && a[2]!=0){
			ans++;
		}
		cout<<ans<<endl;
	}
}