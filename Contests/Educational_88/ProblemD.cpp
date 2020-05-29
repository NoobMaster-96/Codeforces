#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int n;
	cin>>n;
	vector<int> a(n+1);
	vector<pair<int,int>> pre(n+1,make_pair(0,0));
	vector<pair<int,int>> suf(n+1,make_pair(0,0));
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int m = 0;
	int sum = 0;
	for(int i=1;i<=n;i++){
		if(sum<=0){
			sum = a[i];
			m = a[i];
			pre[i].first = sum;
			pre[i].second = m;
			continue;
		}
		sum+=a[i];
        m = max(m,a[i]);
        pre[i].first = sum;
        pre[i].second = m;
	}
	sum = 0;
	m = 0;
	for(int i=n;i>0;i--){
		if(sum<=0){
            sum = a[i];
            m = a[i];
            suf[i].first = sum;
            suf[i].second = m;
            continue;
        }
        sum+=a[i];
        m = max(m,a[i]);
        suf[i].first = sum;
        suf[i].second = m;
	}
	m = 0;
	for(int i=1;i<=n;i++){
		int ans = pre[i].first+suf[i].first-a[i]-max(pre[i].second,suf[i].second);
		m = max(m,ans);
		m = max(pre[i].first-pre[i].second,m);
		m = max(suf[i].first-suf[i].second,m);
	}
	cout<<m<<endl;
}