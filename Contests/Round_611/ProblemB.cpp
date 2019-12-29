#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int num = (n/k)*k + k/2;
		if(num<=n){
			cout<<num<<endl;
		}
		else{
			cout<<n<<endl;
		}
	}
}