#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
vector<int> adjlist[200001];
int n,k;
map<int,int> dist;
int count1[200001];

void addedge(int s, int d){
	adjlist[s].push_back(d);
	adjlist[d].push_back(s);
}

void bfs(vector<int> &cities){
	queue<int> q;
	q.push(1);
	dist[1] = 0;
	while(!q.empty()){
		int temp = q.front();
		q.pop();
		for(int val:adjlist[temp]){
			if(dist[val] == INT_MAX){
				if(cities[val]==0){
					dist[val] = dist[temp];
				}
				else{
					dist[val] = dist[temp]+1;
				}
				q.push(val);
			}
		}
	}
}

void numberOfNodes(int s, int e){ 
    vector<int>::iterator u; 
    count1[s] = 1; 
    for (u = adjlist[s].begin(); u != adjlist[s].end(); u++) { 
        if(*u == e){
        	continue;
        }
        numberOfNodes(*u, s); 
        count1[s] += count1[*u]; 
    }
} 

int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		dist[i] = INT_MAX;
	}
	for(int i=1;i<n;i++){
		int u,v;
		cin>>u>>v;
		addedge(u,v);
	}
	numberOfNodes(1,0);
	vector<pair<int,int>> nodes;
	for(int i=1;i<=n;i++){
		nodes.push_back(make_pair(count1[i],i));
	}
	sort(nodes.begin(),nodes.end());
	vector<int> cities(n+1,1);
	for(int i=0;i<k;i++){
		cities[nodes[i].second] = 0;
	}
	bfs(cities);
	long long int ans = 0;
	for(int i=1;i<=n;i++){
		cout<<cities[i]<<" ";
		if(cities[i]==0){
			ans += dist[i]+1;
		}
	}
	cout<<ans;
}