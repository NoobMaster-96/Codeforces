#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n),b(n);
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		if(b[0]!=a[0]){
			cout<<"NO"<<endl;
			continue;
		}
		bool check = true;
		m[a[0]]++;
		for(int i=1;i<n;i++){
			if(a[i]<b[i]){
				if(!m[1]){
					check = false;
					break;
				}
			}
			else if(a[i]>b[i]){
				if(!m[-1]){
					check = false;
					break;
				}
			}
			m[a[i]] = 1;
		}
		if(check){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}