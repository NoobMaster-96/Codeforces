#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solution(int n){
	if(n==1){
		cout<<1<<endl;
		return;
	}
	if(n==2){
		cout<<-1<<endl;
		return;
	}
	vector<vector<int>> ans(n,vector<int>(n));
	int cnt = 0;
	int a=1,b=2;
	for(int i=0;i<n;i+=1){
		for(int j=0;j<n;j+=1){
			if(cnt<(((n*n)+1)/2)){
				ans[i][j] = a;
				a+=2;
			}
			else{
				ans[i][j] = b;
				b+=2;
			}
			cnt+=1;
		}
	}
	for(int i=0;i<n;i+=1){
		for(int j=0;j<n;j+=1){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		solution(n);
	}
}