#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> ans;
		for(int i=1;i<=n;i*=2){
			ans.push_back(i);
			n-=i;
		}
		if(n>0){
			ans.push_back(n);
			sort(ans.begin(),ans.end());
		}
		cout<<ans.size()-1<<endl;
		for(int i=1;i<ans.size();i++){
			cout<<ans[i]-ans[i-1]<<" ";
		}
		cout<<endl;
	}
}