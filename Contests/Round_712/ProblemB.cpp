#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(string a, string b, int l){
	if(a==b){
		cout<<"YES"<<endl;
		return;
	}
	int a0 = 0, b0 = 0;
	for(int i=0;i<l;i+=1){
		if(a[i]=='0'){
			a0+=1;
		}
		if(b[i]=='0'){
			b0+=1;
		}
	}
	if(a0!=b0){
		cout<<"NO"<<endl;
		return;
	}
	int idx = 0;
	while(idx<l){
		bool isSame = true;
		if(a[idx]!=b[idx]){
			isSame = false;
		}
		int cnt0 = 0, cnt1 = 0;
		int i=idx;
		for(;i<l;i+=1){
			if(a[i]=='0'){
				cnt0+=1;
			}
			else{
				cnt1+=1;
			}
			if(((a[i]==b[i])^isSame)){
				cout<<"NO"<<endl;
				return;
			}
			if(cnt0==cnt1){
				break;
			}
		}
		idx = i+1;
	}
	cout<<"YES"<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int l;
		string a,b;
		cin>>l>>a>>b;
		solve(a,b,l);
	}
}