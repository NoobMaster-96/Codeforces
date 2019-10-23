#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int n;
		cin>>n;
		int ans=1;
		vector<int> a(n,0);
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		sort(a.begin(),a.end());
		for(int j=0;j<n-1;j++){
			if(a[j+1]-a[j]<=1){
				ans=2;
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}