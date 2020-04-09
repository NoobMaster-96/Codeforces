#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<pair<int,int>> l(m);
	int sum = 0;
	for(int i=0;i<m;i++){
		int temp;
		cin>>temp;
		sum += temp;
		l[i] = make_pair(temp,i);
	}
	if(sum<n){
		cout<<-1;
		return 0;
	}
	sort(l.begin(),l.end());
	vector<int> p(m);
	int limit = n;
	for(int i=0;i<m;i++){
		p[l[i].second] = limit - (l[i].first -1);
		limit -= l[i].first;
		if(p[l[i].second]<1){
			p[l[i].second] = 1;
		} 
	}
	for(int i=0;i<m;i++){
		cout<<p[i]<<" ";
	}
	cout<<endl;
	return 0;
}