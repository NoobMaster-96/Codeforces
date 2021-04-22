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
		bool find = false;
		for(int i=0;i<n;i+=1){
			int x = sqrt(a[i]);
			if(x*x!=a[i]){
				find = true;
				break;
			}
		}
		if(find){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}