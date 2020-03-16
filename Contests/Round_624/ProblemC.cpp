#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		string s;
		cin>>s;
		vector<int> a(m);
		for(int i=0;i<m;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		vector<int> ans(26,0);
		map<int,vector<int>> m1;
		vector<int> temp(26,0);
		temp[s[0]-'a'] = 1;
		m1[0] = temp;
		for(int i=1;i<n;i++){
			char x = s[i];
			vector<int> a1(26,0);
			a1[x-'a']=1;
			vector<int> a2 = m1[i-1];
			for(int j=0;j<26;j++){
				a1[j] += a2[j];
			}
			m1[i] = a1;
		}
		for(int i=0;i<m;i++){
			vector<int> y = m1[a[i]-1];
			for(int j=0;j<26;j++){
				ans[j] += y[j]
;			}
		}
		for(int i=0;i<n;i++){
			ans[s[i]-'a']++;
		}
		for(int i=0;i<26;i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}