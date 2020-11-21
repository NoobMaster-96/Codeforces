#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

bool grid[10][10];

int bfs(int s,int e){
	if(s==e){
		return 0;
	}
	bool vis[10] = {false};
	int d[10] = {-1};
	d[s] = 0;
	queue<int> q;
	q.push(s);
	vis[s] = true;
	while(!q.empty()){
		int node = q.front();
		q.pop();
		for(int i=0;i<10;i++){
			if(grid[node][i] && !vis[i]){
				d[i] = d[node]+1;
				if(i==e){
					return d[i];
				}
				q.push(i);
				vis[i] = true;
			}
		}
	}
	return -1;
}

int main(){
	int a,b;
	cin>>a>>b;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cin>>grid[i][j];
		}
	}
	cout<<bfs(a,b);
}