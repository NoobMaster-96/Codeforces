#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,x,y;
		cin>>a>>b>>x>>y;
		int l1,l2,b1,b2;
		l1 = x;
		l2 = a-(x+1);
		b1 = y;
		b2 = b-(y+1);
		int ans = max(l1*b,max(l2*b,max(b1*a,b2*a)));
		cout<<ans<<endl;
	}
}