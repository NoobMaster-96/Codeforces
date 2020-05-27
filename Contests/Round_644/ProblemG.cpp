#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,a,b;
		cin>>n>>m>>a>>b;
		if(n*a!=m*b){
			cout<<"NO"<<endl;
			continue;
		}
		cout<<"YES"<<endl;
		vector<vector<int>> grid(n,vector<int>(m,0));
		int i=0;
		for(int j=0;j<n;j++){
			for(int k=0;k<a;k++){
				grid[j][i] = 1;
				i++;
				if(i==m){
					i=0;
				}
			}
		}
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				cout<<grid[j][k];
			}
			cout<<endl;
		}
	}
}