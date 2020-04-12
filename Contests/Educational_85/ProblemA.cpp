#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int stats[n+1][2];
		stats[0][0] = 0;
		stats[0][1] = 0;
		for(int i=1;i<=n;i++){
			for(int j=0;j<2;j++){
				cin>>stats[i][j];
			}
		}
		bool ok = true;
		for(int i=1;i<=n;i++){
			if(stats[i][0]<stats[i-1][0]){
				ok = false;
				break;
			}
			if(stats[i][1]<stats[i-1][1]){
				ok = false;
				break;
			}
			if(stats[i][1]-stats[i-1][1]>stats[i][0]-stats[i-1][0]){
				ok = false;
				break;
			}
		}
		if(ok){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}