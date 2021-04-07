#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len = s.length();
		bool flag = true;
		int i = 0;
		for(;i<len;i+=1){
			if(s[len-1-i]!='a'){
				s.insert(i,"a");
				flag = false;
				break;
			}
		}
		if(flag){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl<<s<<endl;
		}
	}
}