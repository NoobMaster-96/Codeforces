#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int size = n*m;
		int ans = size/2;
		if(size%2==1){
			ans++;
		}
		cout<<ans<<endl;
	}
}