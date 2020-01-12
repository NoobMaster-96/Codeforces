#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	string str;
	cin>>str;
	int cntR=0,cntL=0;
	for(int i=0;i<n;i++){
		if(str[i]=='L'){
			cntL++;
		}
		else{
			cntR++;
		}
	}
	long long int ans = cntR+cntL+1;
	cout<<ans;
	return 0;
}