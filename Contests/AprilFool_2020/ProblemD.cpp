#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int ans = s[6]-'0';
	if(ans&1){
		cout<<1<<endl;
		return 0;
	}
	cout<<0<<endl;
	return 0;
}