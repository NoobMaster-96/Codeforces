#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string ans;
		ans += '2';
		if(n==1){
			cout<<-1<<endl;
		}
		else{
			n--;
			for(int i=0;i<n;i++){
				ans += '3';
			}
			cout<<ans<<endl;
		}
	}
}