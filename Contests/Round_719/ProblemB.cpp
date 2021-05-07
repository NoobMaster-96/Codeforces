#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solution(){
	int n;
	cin>>n;
	int ans = 0;
	if(n<10){
		ans += n;
	}
	if(n>=10){
		ans = 9;
	}
	int x = 1;
	for(int i=2;i<=9;i+=1){
		x *=10;
		x+=1;
		int cnt = 1;
		while((x*cnt)<=n && cnt<=9){
			//cout<<x*cnt<<endl;
			ans +=1;
			cnt+=1;
		}
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solution();
	}
}