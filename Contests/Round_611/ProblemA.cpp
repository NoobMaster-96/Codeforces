#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int h,m;
		cin>>h>>m;
		int ans = 60-m;
		ans += 60*(23-h);
		cout<<ans<<endl;
	}
}