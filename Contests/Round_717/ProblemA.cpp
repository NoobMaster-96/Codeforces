#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		for(int i=0;i<n;i+=1){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i+=1){
			int temp = min(a[i],k);
			a[i] -= temp;
			a[n-1] += temp;
			k -= temp;
		}
		for(int i=0;i<n;i+=1){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}