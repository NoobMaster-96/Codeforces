#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int count1 = 0, count0 = 0;
		string ans = "";
		for(int i=0;i<str.length();i++){
			if(str[i]=='0'){
				count0++;
			}
			else{
				count1++;
			}
		}
		if(count1 == 0 || count0 == 0){
			ans = str;
		}
		else{
			ans += str[0];
			for(int i=1;i<2*str.length();i++){
				if(ans[i-1]=='0'){
					ans += '1';
				}
				else{
					ans += '0';
				}
			}
		}
		cout<<ans<<endl;
	}
}