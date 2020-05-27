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
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		int cnte = 0, cnto = 0;
		for(int i=0;i<n;i++){
			if(a[i]%2==0){
				cnte++;
			}
			else{
				cnto++;
			}
		}
		if(cnte%2==0){
			cout<<"YES"<<endl;
			continue;
		}
		bool found = false;
		for(int i=1;i<n;i++){
			if(a[i]-1==a[i-1]){
				found = true;
				break;
			}
		}
		if(found){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}