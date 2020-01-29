#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int num = n%2,num_ = n/2;
		string ans;
		if(num == 1){
			ans += '7';
			for(int i=1; i<num_; i++){
				ans += '1';
			}
		}
		else{
			for(int i=1; i<=num_; i++){
				ans += '1';
			}
		}
		cout<<ans<<endl;
	}
}