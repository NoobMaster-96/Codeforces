#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
#define mod 1000000007

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		ll ans = 1;
		for(int i=0;i<k;i+=1){
			ans *= n;
			ans %= mod;
		}
		cout<<ans<<endl;
	}
}