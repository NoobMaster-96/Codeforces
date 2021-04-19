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
		for(int i=0;i<n;i+=1){
			if(a[i]%2==0){
				cout<<a[i]<<" ";
			}
		}
		for(int i=0;i<n;i+=1){
			if(a[i]%2==1){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}