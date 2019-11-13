#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,x,a,b;
		cin>>n>>x>>a>>b;
		int diff;
		if(a>b){
			diff = a-b;
		}
		else{
			diff = b-a;
		}

		if(diff == n-1){
			cout<<diff<<endl;
			continue;
		}
		diff = diff+x;
		if(diff>=n){
			cout<<n-1<<endl;
		}
		else{
			cout<<diff<<endl;
		}
	}
	return 0;
}