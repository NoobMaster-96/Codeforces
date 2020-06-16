#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int n,m,k;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	cin>>n>>m>>k;
	vector<int> graph[n+1];
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

}