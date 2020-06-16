#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void trapB(vector<string> &grid){
	int n = grid.size();
	int m = grid[0].size();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(grid[i][j] == 'B'){
				if(j-1>=0 && grid[i][j-1]!='G' && grid[i][j-1]!='B'){
					grid[i][j-1] = '#';
				}
				if(j+1<m && grid[i][j+1]!='G' && grid[i][j+1]!='B'){
					grid[i][j+1] = '#';
				}
				if(i-1>=0 && grid[i-1][j]!='G' && grid[i-1][j]!='B'){
					grid[i-1][j] = '#';
				}
				if(i+1<n && grid[i+1][j]!='G' && grid[i+1][j]!='B'){
					grid[i+1][j] = '#';
				}
			}
		}
	}
}

void dfs(vector<string> &grid, vector<vector<bool>> &vis, int i, int j){
	vis[i][j] = true;
	if(grid[i][j]=='#'){
		return;
	}
	if(i-1>=0 && !(vis[i-1][j])){
		dfs(grid,vis,i-1,j);
	}
	if(j-1>=0 && !(vis[i][j-1])){
		dfs(grid,vis,i,j-1);
	}
	if(i+1<grid.size() && !(vis[i+1][j])){
		dfs(grid,vis,i+1,j);
	}
	if(j+1<grid[0].size() && !(vis[i][j+1])){
		dfs(grid,vis,i,j+1);
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<string> grid(n);
		int cntG = 0;
		for(int i=0;i<n;i++){
			cin>>grid[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(grid[i][j]=='G'){
					cntG++;
				}
			}
		}
		trapB(grid);
		//for(int i=0;i<n;i++){
		//	cout<<grid[i]<<endl;
		//}
		vector<vector<bool>> vis(n,vector<bool>(m,0));
		dfs(grid,vis,n-1,m-1);
		bool flag = true;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(grid[i][j]=='G'){
					if(vis[i][j]==false){
						flag = false;
						break;
					}
					if(i-1>=0 && grid[i-1][j]=='B'){
						flag = false;
						break;
					}
					if(i+1<n && grid[i+1][j]=='B'){
						flag = false;
						break;
					}
					if(j-1>=0 && grid[i][j-1]=='B'){
						flag = false;
						break;
					}
					if(j+1<m && grid[i][j+1]=='B'){
						flag = false;
						break;
					}
				}
			}
			if(!flag){
				break;
			}
		}
		if(flag){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}