#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,l;
		cin>>n>>l;
		vector<int> x(n),y(n);
		for(int i=0;i<n;i++){
			cin>>x[i];
		}
		for(int i=0;i<n;i++){
			cin>>y[i];
		}
		sort(x.begin(),x.end());
		vector<pair<int,int>> m;
		for(int i=0;i<n;i++){
			int j = i;
			while(j<n && x[i]==x[j]){
				j+=1;
			}
			j -= 1;
			int idx = upper_bound(x.begin(), x.end(), x[j]+l) - x.begin();
			m.push_back({x[i],idx-i});
			i = j;
		}
		int ans = 0;
		int len = m.size();
		vector<int> a(len),b(len);
		b[len-1] = m[len-1].second;
		for(int i=0;i<len;i++){
			a[i] = m[i].first;
		}
		for(int i = len-2;i>=0;i-=1){
			b[i] = max(m[i].second,b[i+1]);
		}
		for(int i=0;i<len;i++){
			int temp = m[i].second;
			if(upper_bound(a.begin(), a.end(), m[i].first+l)!=a.end()){
				int j = upper_bound(a.begin(), a.end(), m[i].first+l) - a.begin();
				temp += b[j];
			}
			ans = max(ans,temp);
		}
		cout<<ans<<endl;
	}
}