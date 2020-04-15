#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n<3){
			cout<<0<<endl;
			continue;
		}
		cout<<(n-1)/2<<endl;
	}
}