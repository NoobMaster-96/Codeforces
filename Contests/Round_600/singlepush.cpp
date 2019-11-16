#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector<int> a(n,0);
		vector<int> b(n,0);
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		for(int j=0;j<n;j++){
			cin>>b[j];
		}
		vector<int> diff(n,0);
		for(int j=0;j<n;j++){
			diff[j] = b[j] - a[j];
		}
		
	}
	return 0;
}