#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		vector<int> a(n);
		for(int i=0;i<n;i+=1){
			cin>>a[i];
		}
		int sum = 0;
		for(int i=0;i<n-1;i+=1){
			sum += a[i];
			if(sum==x){
				swap(a[i],a[i+1]);
			}
		}
		sum += a[n-1];
		if(sum==x){
			cout<<"NO";
		}
		else{
			cout<<"YES"<<endl;
			for(int x:a){
				cout<<x<<" ";
			}
		}
		cout<<endl;
	}
}