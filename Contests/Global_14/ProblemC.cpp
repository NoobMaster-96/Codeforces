#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,x;
		cin>>n>>m>>x;
		vector<int> h(n);
		for(int i=0;i<n;i+=1){
			cin>>h[i];
		}
		cout<<"YES"<<endl;
		priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
		for(int i=1;i<=m;i+=1){
			pq.push({0,i});
		}
		for(int i=0;i<n;i+=1){
			pair<int,int> temp = pq.top();
			pq.pop();
			cout<<temp.second<<" ";
			temp.first += h[i];
			pq.push(temp);
		}
		cout<<endl;
	}
}