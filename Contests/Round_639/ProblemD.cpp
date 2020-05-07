#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 

void dfs(vector<vector<int>>& mat, int r, int c){
	int nr = mat.size();
	int nc = mat[0].size();
	mat[r][c] = 0;
	if(r-1 >= 0 && mat[r-1][c] == 1){
		dfs(mat,r-1,c);
	}
	if(r+1 < nr && mat[r+1][c] == 1){
		dfs(mat,r+1,c);
	}
	if(c-1 >= 0 && mat[r][c-1] == 1){
		dfs(mat,r,c-1);
	}
	if(c+1 < nc && mat[r][c+1] == 1){
		dfs(mat,r,c+1);
	}
}

int numIslands(vector<vector<int>>& mat){
	int nr = mat.size();
	if(!nr){
		return 0;
	}
	int nc = mat[0].size();
	int count = 0;
	for(int i=0; i<nr; i++){
		for(int j=0; j<nc; j++){
			if(mat[i][j] == 1){
				dfs(mat,i,j);
				count++;
			}
		}
	}
	return count;
}

int main(){
	int n,m;
	cin>>n>>m;
	vector<string> s(n);
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	vector<vector<int>> board(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j] == '#'){
				board[i][j] = 1;
			}
			else{
				board[i][j] = 0;
			}
		}
	} 
	bool flag = true;
	int cntrw = 0, cntcw = 0;
	for(int i=0;i<n;i++){
		bool check = false;
		for(int j=0;j<m;j++){
			if(board[i][j] == 1){
				check = true;
				break;
			}
		}
		if(!check){
			cntrw++;
		}
	}
	for(int i=0;i<m;i++){
		bool check = false;
		for(int j=0;j<n;j++){
			if(board[j][i] == 1){
				check = true;
				break;
			}
		}
		if(!check){
			cntcw++;
		}
	}
	if((cntrw!=0 && cntcw==0) || (cntcw!=0 && cntrw==0)){
		flag = false;
	}
	for(int i=0;i<n;i++){
		int color = board[i][0];
		int change = 0;
		for(int j=0;j<m;j++){
			if(color != board[i][j]){
				change++;
				color = board[i][j];
				if(change == 2 && color == 1){
					flag = false;
					break;
				}
				else if(change == 3){
					flag = false;
					break;
				}
			}
		}
		if(!flag){
			break;
		}
	}
	for(int i=0;i<m;i++){
		int color = board[0][i];
		int change = 0;
		for(int j=0;j<n;j++){
			if(color != board[j][i]){
				change++;
				color = board[j][i];
				if(change == 2 && color == 1){
					flag = false;
					break;
				}
				else if(change == 3){
					flag = false;
					break;
				}
			}
		}
		if(!flag){
			break;
		}
	}
	if(!flag){
		cout<<-1<<endl;
		return 0;
	}
	int ans = numIslands(board);
	cout<<ans<<endl;
}