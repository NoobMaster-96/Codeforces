#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int len;
		cin>>len;
		string s;
		cin>>s;
		if(len == 1){
			cout<<-1<<endl;
			continue;
		}
		string ans;
		int num = 0;
		for(int i=0;i<len;i++){
			if(s[i]%2==1){
				ans += s[i];
				num++;
			}
			if(num == 2){
				break;
			}
		}
		if(num == 2){
			cout<<ans<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
}