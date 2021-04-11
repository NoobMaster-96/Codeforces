#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solve(int a_, int b_, string& s){
	int len = s.length();
	int a = a_, b = b_;
	if(a&1==1 && b&1==1){
		cout<<-1<<endl;
		return;
	}
	for(int i=0;i<len;i+=1){
		if(s[i]=='0'){
			a-=1;
			if(a<0){
				cout<<-1<<endl;
				return;
			}
		}
		else if(s[i]=='1'){
			b-=1;
			if(b<0){
				cout<<-1<<endl;
				return;
			}
		}
	}
	for(int i=0;i<=(len-1)/2;i+=1){
		if(s[i]!='?' && s[len-i-1]!='?' && s[i]!=s[len-i-1]){
			cout<<-1<<endl;
			return;
		}
		else if(s[i]=='?' && s[len-i-1]!='?'){
			if(s[len-i-1]=='0'){
				a-=1;
				if(a<0){
					cout<<-1<<endl;
					return;
				}
			}
			else{
				b-=1;
				if(b<0){
					cout<<-1<<endl;
					return;
				}
			}
			s[i] = s[len-i-1];
		}
		else if(s[i]!='?' && s[len-i-1]=='?'){
			if(s[i]=='0'){
				a-=1;
				if(a<0){
					cout<<-1<<endl;
					return;
				}
			}
			else{
				b-=1;
				if(b<0){
					cout<<-1<<endl;
					return;
				}
			}
			s[len-i-1] = s[i];
		}
	}
	if(a&1==1){
		s[(len-1)/2] = '0';
		a-=1;
	}
	else if(b&1==1){
		s[(len-1)/2] = '1';
		b-=1;
	}
	for(int i=0;i<=(len-1)/2;i+=1){
		if(s[i]=='?'){
			if(a>0){
				s[i] = '0';
				s[len-i-1] = '0';
				a-=2;
				if(a<0){
					cout<<-1<<endl;
					return;
				}
			}
			else if(b>0){
				s[i] = '1';
				s[len-i-1] = '1';
				b-=2;
				if(b<0){
					cout<<-1<<endl;
					return;
				}
			}
		}
	}
	cout<<s<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		string s;
		cin>>a>>b>>s;
		solve(a,b,s);
	}
}