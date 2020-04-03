#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s="000000";
	int idx = 5;
	while(n>0){
		s[idx] = n%2+'0';
		n /= 2;
		idx--;
	}
	string ans = "000000";
	ans[0] = s[0];
	ans[1] = s[5];
	ans[2] = s[3];
	ans[3] = s[2];
	ans[4] = s[4];
	ans[5] = s[1];
	int num=0;
	for(int i=5;i>=0;i--){
		num += pow(2,5-i)*(ans[i]-'0');
	}
	cout<<num;
}