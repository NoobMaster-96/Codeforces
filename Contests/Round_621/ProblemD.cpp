#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int> adjlist[], int s, int d){
	adjlist[s].push_back(d);
	adjlist[d].push_back(s);
}

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> adjlist[n];
	vector<int> special(k);
	for(int i=0;i<k;i++){
		cin>>special[i];
	}
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		addedge(adjlist,a-1,b-1);
	}
	
}