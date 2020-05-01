#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	int t;
	cin>>t;
	while(t--){
		lli x,y,a,b;
		cin>>x>>y>>a>>b;
		lli ans = 0;
		if(2*a<b){
			ans = a*(x+y);
		}
		else{
			lli temp = min(x,y);
			lli tem1 = max(x,y);
			ans += temp*b;
			ans += (tem1-temp)*a;
		}
		cout<<ans<<endl;
	}
}