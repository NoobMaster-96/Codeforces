#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(vector<string>& grid, int n){
	vector<pair<int,int>> points;
	for(int i=0;i<n;i+=1){
		for(int j=0;j<n;j+=1){
			if(grid[i][j]=='*'){
				pair<int,int> temp = {i,j};
				points.push_back(temp);
			}
		}
	}
	if(points[0].first==points[1].first){
		if(points[0].first!=n-1){
			grid[points[0].first+1][points[0].second] = '*';
			grid[points[1].first+1][points[1].second] = '*';
		}
		else{
			grid[points[0].first-1][points[0].second] = '*';
			grid[points[1].first-1][points[1].second] = '*';
		}
	}
	else if(points[0].second==points[1].second){
		if(points[0].second!=n-1){
			grid[points[0].first][points[0].second+1] = '*';
			grid[points[1].first][points[1].second+1] = '*';
		}
		else{
			grid[points[0].first][points[0].second-1] = '*';
			grid[points[1].first][points[1].second-1] = '*';
		}
	}
	else{
		grid[points[0].first][points[1].second] = '*';
		grid[points[1].first][points[0].second] = '*';
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string> grid(n);
		for(int i=0;i<n;i+=1){
			cin>>grid[i];
		}
		solve(grid,n);
		for(int i=0;i<n;i+=1){
			cout<<grid[i]<<endl;
		}
	}
}