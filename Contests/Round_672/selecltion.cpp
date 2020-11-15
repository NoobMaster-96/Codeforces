#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i+=1){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		int best = 0;
		int worst = 0;
		for(int i=n-1;i>=0;i-=2){
			best += a[i];
		}
		for(int i=n-1;i>=(n/2);i-=1){
			worst += a[i];
		}
		cout<<best<<" "<<worst<<endl;
	}
}