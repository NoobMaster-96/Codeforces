#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
vector<int>l(1000007),r(1000007);

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		string str;
		cin>>n>>str;
		int s = n-1,e = 0;
		for(int i=0;i<n;i+=1){
			if(str[i]=='*'){
				s = min(s,i);
				e = max(e,i);
			}
		}
		l[s]=0;
		r[e]=0;
		for(int i=s+1;i<e;i+=1){
			if(str[i]=='.'){
				l[i] = l[i-1]+1;
			}
			else{
				l[i] = l[i-1];
			}
		}
		for(int i=e-1;i>s;i-=1){
			if(str[i]=='.'){
				r[i] = r[i+1]+1;
			}
			else{
				r[i] = r[i+1];
			}
		}
		ll ans = 0;
		//cout<<s<<" "<<e<<endl;
		for(int i=s+1;i<e;i+=1){
			if(str[i]=='.'){
				ans += (ll)min(e-i-r[i+1],i-s-l[i-1]);
			}
		}
		cout<<ans<<endl;
	}
}