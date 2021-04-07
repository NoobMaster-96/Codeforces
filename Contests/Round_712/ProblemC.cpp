#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(int l, string s){
	int cnt0 = 0;
	for(int i=0;i<l;i+=1){
		if(s[i]=='0'){
			cnt0+=1;
		}
	}
	if(s[0]!='1' || cnt0%2!=0 || s[l-1]!='1'){
		cout<<"NO"<<endl;
		return;
	}
	string a = "",b = "";
	int cnt1 = 0;
	cnt1 = (l-cnt0)/2;
	bool flag = true;
	for(int i=0;i<l;i+=1){
		if(s[i]=='1'){
			if(cnt1>0){
				a+='(';
				b+='(';
				cnt1-=1;
			}
			else{
				a+=')';
				b+=')';
			}
		}
		else{
			if(flag){
				a+='(';
				b+=')';
				flag = !flag;
			}
			else{
				a+=')';
				b+='(';
				flag = !flag;
			}
		}
	}
	cout<<"YES"<<endl<<b<<endl<<a<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int l;
		string s;
		cin>>l>>s;
		solve(l,s);
	}
}