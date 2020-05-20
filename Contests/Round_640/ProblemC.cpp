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
		int m = k/(n-1);
		int num1 = (n)*m;
		int num2 = (n-1)*m;
		int val = k-num2;
		lli ans = (lli)num1 + (lli)val;
		if(val==0){
			ans -= (lli)1;
		}
		cout<<ans<<endl;
	}
}