#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 

int main(){
	int t;
	cin>>t;
	while(t--){
		lli n;
		cin>>n;
		lli ans = 0;
		lli dis = 1;
		for(lli i=3;i<=n;i+=2){
			ans += dis*(i*i - (i-2)*(i-2));
			dis++;
		}
		cout<<ans<<endl;
	}
}