#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<string> grid;
		bool black = true;
		string s1 = "";
		string s2 = "";
		for(int i=0;i<m;i++){
			if(black){
				s1+='B';
				s2+='W';
				black = 0;
			}
			else{
				s1 += 'W';
				s2 += 'B';
				black = 1;
			}
		}
		for(int i=0;i<n;i++){
			if(i%2==0){
				grid.push_back(s1);
			}
			else{
				grid.push_back(s2);
			}
		}
		if((n*m)%2==0){
			if(grid[n-1][m-1] == 'W'){
				grid[n-1][m-1] = 'B';
			}
			else{
				grid[n-1][m-2] = 'B';
			}
		}
		for(int i=0;i<n;i++){
			cout<<grid[i]<<endl;
		}
	}
	return 0;
}