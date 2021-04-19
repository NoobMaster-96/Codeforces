#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		int cntT = 0;
		int cntM = 0;
		bool ok = true;
		for(int i=0;i<n;i+=1){
			if(s[i]=='T'){
				cntT+=1;
			}
			else{
				cntM+=1;
			}
			if(cntM>cntT){
				ok = false;
				break;
			}
		}
		cntT = 0;
		cntM = 0;
		for(int i=n-1;i>=0;i-=1){
			if(s[i]=='T'){
				cntT+=1;
			}
			else{
				cntM+=1;
			}
			if(cntM>cntT){
				ok = false;
				break;
			}
		}
		if(ok && cntM==n/3){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}