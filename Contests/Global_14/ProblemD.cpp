#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,l,r;
		cin>>n>>l>>r;
		vector<int> c(n);
		for(int i=0;i<n;i+=1){
			cin>>c[i];
		}
		if(r>l){
			swap(r,l);
			reverse(c.begin(),c.end());
		}
		map<int,int> ls,rs;
		int rl = l, rr = r;
		for(int i=0;i<l;i+=1){
			ls[c[i]] +=1;
		}
		for(int i=l;i<n;i+=1){
			if(ls[c[i]]){
				ls[c[i]]-=1;
				rl-=1;
				rr-=1;
			}
			else{
				rs[c[i]]+=1;
			}
		}
		int ans = 0;
		for(auto x:ls){
			if(x.second>1){
				int d = min(x.second/2,(rl-rr)/2);
				//cout<<d<<endl;
				x.second -= d*2;
				rl -= d*2;
				ans += d;
			}
			if(rr==rl){
				break;
			}
		}
		if(rr!=rl){
			ans += (rl-rr)/2;
			rr += (rl-rr)/2;
		}
		ans += rr;
		cout<<ans<<endl;
	}
}