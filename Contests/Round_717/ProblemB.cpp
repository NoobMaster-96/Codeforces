#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solution(){
	int n;
	cin>>n;
	vector<int> a(n);
	int x = 0;
	for(int i=0;i<n;i+=1){
		cin>>a[i];
		x ^= a[i];
	}
	if(x==0){
		cout<<"YES"<<endl;
		return;
	}
	int o = 0;
	bool found = false;
	for(int i=0;i<n-1;i+=1){
		o ^= a[i];
		if(o==x){
			int r = 0;
			for(int j=n-1;j>i;j-=1){
				r ^= a[j];
				if(r==o){
					found = true;
					break;
				}
			}
		}
		if(found){
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

int main(){
	int t;
	cin>>t;
	while(t--){
		solution();
	}
}