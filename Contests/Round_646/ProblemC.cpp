#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
    	int n,x;
    	cin>>n>>x;
    	vector<int> graph[n+1];
    	for(int i=1;i<n;i++){
    		int u,v;
    		cin>>u>>v;
    		graph[u].push_back(v);
    		graph[v].push_back(u);
    	}
    	int nodes = n-2;
    	if(graph[x].size()<=1){
    		cout<<"Ayush"<<endl;
    		continue;
    	}
    	if(nodes%2==1){
    		cout<<"Ashish"<<endl;
    	}
    	else{
    		cout<<"Ayush"<<endl;
    	}
    }
}