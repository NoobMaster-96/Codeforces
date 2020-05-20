#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 

int main(){
	int n,s;
	cin>>n>>s;
	if(s<2*n){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
		vector<int> ans(n);
		for(int i=0;i<=n-2;i++){
			ans[i] = 2;
		}
		ans[n-1] = s-(2*(n-1));
		for(auto i:ans){
			cout<<i<<" ";
		}
		cout<<endl<<1<<endl;
	}
}