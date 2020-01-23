#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,n;
		cin>>a>>b>>c>>n;
		int maxval = max(a,max(b,c));
		int coins = 3*maxval-(a+b+c);
		n -= coins;
		if(n<0 || n%3!=0){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
}