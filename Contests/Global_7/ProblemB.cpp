#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> x(n);
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	vector<int> ans(n);
	ans[0] = x[0];
	int currmax = ans[0];
	for(int i=1;i<n;i++){
		ans[i] = x[i]+currmax;
		currmax = max(currmax,ans[i]); 
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
}