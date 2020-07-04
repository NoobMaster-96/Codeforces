#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int n,m;
int a[107][107];
int vis[107][107];
int b[107][107];
int dir[4][2] = {{-1,0},{0,-1},{0,1},{1,0}};

bool isSafe(int x,int y){
    return x>=0 && x<n && y>=0 && y<m;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--){
		memset(vis,0,sizeof(vis));
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				char ch;
				cin>>ch;
				if(ch=='_'){
					a[i][j] = -1;
				}
				else{
					a[i][j] = ch-'0';
				}
				b[i][j] = a[i][j];
			}
		}
		queue<pair<int,int>> q;
    	int cnt = 0;
    	for(int i=0;i<n;i++){
        	for(int j=0;j<m;j++){
            	if(a[i][j]==0){
                	q.push({i,j});
                	vis[i][j] = 1;
            	}
            	else if(a[i][j]!=-1){
            		cnt++;
            	}
        	}
    	}
    	if(cnt==0){
        	cout<<0<<endl;
        	continue;
    	}
    	if(q.size()==0){
        	cout<<-1<<endl;
        	continue;
    	}
    
    	int ans = 0;
    	while(!q.empty()){
        	int sz = q.size();
        	while(sz--){
            	auto x = q.front();
            	q.pop();
            	if(a[x.first][x.second]==1 && vis[x.first][x.second]){
                	q.push({x.first,x.second});
                	a[x.first][x.second] = 0;
            	}
            	else{
                	for(int i=0;i<4;i++){
                    	int nx = x.first+dir[i][0];
                    	int ny = x.second+dir[i][1];
                    	if(isSafe(nx,ny) && !vis[nx][ny] && a[nx][ny]!=-1 && a[nx][ny]!=0){
                        	a[nx][ny]--;
                        	vis[nx][ny] = 1;
                        	q.push({nx,ny});
                    	}
                	}    
            	}    
        	}
        	if(q.size()){
            	ans++;
        	}
    	}
    	for(int i=0;i<n;i++){
        	for(int j=0;j<m;j++){
            	if(!vis[i][j]){
                	if(b[i][j]==1 || b[i][j]==2){
                    	ans = -1;
                    	break;
                	} 
            	}
        	}
    	}
    	cout<<ans<<endl;
	}
}