#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int N = n*n;
	int mat[n][n];
	vector<int> list(N,0);
	for(int i=0;i<N;i++){
		list[i]=i+1;
	}
	int i=1;
	int k=0;
	for(int j=0;j<n;j++){
		if(k==0){
			for(;k<n;k++){
				mat[k][j]=i;
				i++;
			}
		}
		else if(k==n){
			for(;k>0;k--){
				mat[k-1][j]=i;
				i++;
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
	
}