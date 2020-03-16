#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int ans;
		if(a == b){
			ans = 0;
		}
		else if((a>b && (a-b)%2==0) || (a<b && (b-a)%2==1)){
			ans = 1;
		}
		else{
			ans = 2;
		}
		cout<<ans<<endl;
	}
}