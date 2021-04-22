#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 

void nf(){
	cout<<-1<<endl;
}

void solve(vector<int>& b, int n){
	multiset<int> all(b.begin(),b.end());
	ll sum = accumulate(b.begin(),b.end(),0LL);
	for(int x:b){
		all.erase(all.find(x));
		sum-=x;
		if((sum&1)==0 && sum<=2000000000 && all.find(sum/2)!=all.end()){
			all.erase(all.find(sum/2));
			for(int i:all){
				cout<<i<<" ";
			}
			cout<<endl;
			return;
		}
		sum+=x;
		all.insert(x);
	}
	nf();
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> b(n+2);
		for(int i=0;i<n+2;i+=1){
			cin>>b[i];
		}
		solve(b,n);
	}
}