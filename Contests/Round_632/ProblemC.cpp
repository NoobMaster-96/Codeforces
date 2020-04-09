#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	cin>>n;
	vector<long long int> a(n+1);
	a[0]=0;
	vector<pair<long long int,long long int>> intervals;
	map<long long int,long long int> m;
	m[0] = 0;
	long long int sum = 0;
	for(long long int i=1;i<=n;i++){
		cin>>a[i];
		sum += a[i];
		if(m.find(sum)!=m.end()){
			long long int s = m[sum];
			long long int e = i;
			intervals.push_back(make_pair(s+1,e));
			m[sum] = e;
		}
		else{
			m[sum] = i;
		}
	}
	long long int ans = 0;
	long long int start = 1;
	long long int overlaplen = 0;
	for(long long int i=0;i<intervals.size();i++){
		cout<<intervals[i].first<<" "<<intervals[i].second<<endl;
		long long int len = intervals[i].second -start;
		ans += len*(len+1)/2;
		ans -= overlaplen*(overlaplen+1)/2;
		cout<<ans<<endl;
		overlaplen = intervals[i].second-intervals[i].first-1;
		start = intervals[i].first+1;
	}
	ans += (n+1-start)*(n-start+2)/2;
	ans -= overlaplen*(overlaplen+1)/2;
	cout<<ans;
}