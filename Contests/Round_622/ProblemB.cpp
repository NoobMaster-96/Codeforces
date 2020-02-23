#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> m, int n){
	long long int ans = 0;
	vector<int> ans_s(n);
	vector<int> temp (n);
	for(int i=0;i<n;i++){
		long long int tempans = m[i];
		temp[i] = m[i];

		for(int j=i+1;j<n;j++){
			if(m[j]>temp[j-1]){
				temp[j] = temp[j-1];
				tempans += temp[j];
			}
			else{
				temp[j] = m[j];
				tempans += temp[j];
			}
		}

		for(int j=i-1;j>=0;j--){
			if(m[j]>temp[j+1]){
				temp[j] = temp[j+1];
				tempans += temp[j];
			}
			else{
				temp[j] = m[j];
				tempans += temp[j];
			}
		}
		if(tempans>ans){
			ans = tempans;
			for(int j=0;j<n;j++){
				ans_s[j] = temp[j];
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<ans_s[i]<<" ";
	}
}

int main(){
	int n;
	cin>>n;
	vector<int>m(n);
	for(int i=0;i<n;i++){
		cin>>m[i];
	}
	solve(m,n);
}