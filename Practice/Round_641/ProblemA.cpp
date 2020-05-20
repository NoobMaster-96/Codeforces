#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		lli ans = n;
		lli num = 2;
		for(;num<=n;num++){
			if(n%num==0){
				break;
			}
		}
		for(int i=0;i<k;i++){
			ans += num;
			if(ans%2==0){
				num = 2;
			}
		}
		cout<<ans<<endl;
	}
}