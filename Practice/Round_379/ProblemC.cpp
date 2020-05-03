#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 
 
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int x,s;
	cin>>x>>s;
	vector<int> a(m+1);
	vector<int> b(m+1);
	vector<int> c(k+1);
	vector<int> d(k+1);
	a[0] = x;
	b[0] = 0;
	c[0] = 0;
	d[0] = 0;
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		cin>>b[i];
	}
	for(int i=1;i<=k;i++){
		cin>>c[i];
	}
	for(int i=1;i<=k;i++){
		cin>>d[i];
	}
	lli ans = (lli)n*(lli)x;
	for(int i=0;i<=m;i++){
		int mleft = s-b[i];
		if(mleft<0){
			continue;
		}
		int s=0,e=k;
		while(s<e){
			int m = (s+e+1)/2;
			if(d[m]<=mleft){
				s = m;
			}
			else{
				e = m-1;
			}
		}
		ans = min(ans,(lli)(n-c[s])*(lli)a[i]);
	}
	cout<<ans<<endl;
}
