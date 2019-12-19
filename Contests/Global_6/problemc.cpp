#include<bits/stdc++.h>
using namespace std;

vector<bool> prime(1001,1);
int sieve(int n){
	prime[0] = 0;
	prime[1] = 0;
	for(int i=2;i*i<=1001;i++){
		if(prime[i]){
			for(int j=i*i;j<1001;j += i){
				prime[j] = false;
			}
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(prime[i]==1){
			ans++;
		}
	}
	return ans;
}

int main(){
	int r,c;
	cin>>r>>c;
	int ans = sieve(r+c);
	vector<vector<int>> mat(r,vector<int>(c,1));
	if(ans == r || ans ==c){
		if(ans==r){
			int idx=0,idy=1;
			for(int i=2;i<=r+c;i++){
				if(prime[i]==1){
					for(int j=0;j<c;j++){
						mat[idx][j] *= i;
					}
					idx++;
				}
				else{
					for(int j=0;j<r;j++){
						mat[j][idy] *= i;
					}
					idy++;
				}
			}
			
		}
		else{
			int idx=0,idy=1;
			for(int i=2;i<=r+c;i++){
				if(prime[i]==1){
					for(int j=0;j<r;j++){
						mat[j][idx] *= i;
					}
					idx++;
				}
				else{
					for(int j=0;j<c;j++){
						mat[idy][j] *= i;
					}
					idy++;
				}
			}
		}
	}
	else if(c==1 || r==1){
		if(c==1){
			for(int i=0; i<r; i++){
				mat[i][0] = i+2;
			}
		}
		else{
			for(int i=0; i<c; i++){
				mat[0][i] = i+2;
			}
		}
	}
	else{
		int a = 1;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				mat[i][j] *= a;
			}
			a++;
		}
		for(int i=0;i<c;i++){
			for(int j=0;j<r;j++){
				mat[j][i] *= a;
			}
			a++;
		}
	}
	if(c==1 && r==1){
		cout<<0<<endl;
	}
	else{
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}