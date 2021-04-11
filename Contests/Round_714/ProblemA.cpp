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
		int x=a[0],y,freqx=1,freqy=0,idx=1,idy;
		for(int i=1;i<n;i+=1){
			if(a[i]==x){
				freqx+=1;
				idx = i+1;
			}
			else{
				y = a[i];
				freqy+=1;
				idy = i+1;
			}
		}
		if(freqy==1){
			cout<<idy<<endl;
		}
		else{
			cout<<idx<<endl;
		}
	}
}