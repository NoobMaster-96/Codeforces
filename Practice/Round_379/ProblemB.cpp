#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 

int main(){
	int k2,k3,k5,k6;
	cin>>k2>>k3>>k5>>k6;
	lli ans = 0;
	int num256 = min(k2,min(k5,k6));
	ans += (lli)(256)*(lli)num256;
	k2 -= num256;
	k5 -= num256;
	k6 -= num256;
	int num32 = min(k2,k3);
	ans += (lli)32*(lli)num32;
	cout<<ans<<endl;
}