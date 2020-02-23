#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=1;i<n;i++){
			if(a[i]*i <= d){
				a[0] += a[i];
				d -= a[i]*i;
			}
			else if(a[i]*i > d && d != 0){
				a[0] += d/i;
				d -= (d/i)*i;
			}
		}
		cout<<a[0]<<endl;
	}
}