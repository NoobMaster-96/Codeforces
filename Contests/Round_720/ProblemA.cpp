#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(b==1){
			cout<<"NO"<<endl;
			continue;
		}
		ll x,y,z;
		x = (ll)a;
		y = (ll)a*(ll)b;
		z = x+y;
		cout<<"YES"<<endl;
		cout<<x<<" "<<y<<" "<<z<<endl;
	}
}