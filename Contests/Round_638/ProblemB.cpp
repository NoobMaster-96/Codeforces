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
		vector<int> a(n);
		map<int,int> m; 
		for(int i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
		}
		if(m.size()>k){
			cout<<-1<<endl;
			continue;
		}
		int val = 0;
		vector<int> ans;
		for(auto i:m){
			val = max(val,i.second);
			ans.push_back(i.first);
		}
		int len = ans.size();
		if(len<k){
			for(int i=0;i<k-len;i++){
				ans.push_back(ans[len-1]);
			}
			len = ans.size();
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<len;j++){
				ans.push_back(ans[j]);
			}
		}
		cout<<ans.size()<<endl;
		for(auto i:ans){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}