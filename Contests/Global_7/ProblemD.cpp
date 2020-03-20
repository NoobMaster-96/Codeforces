#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string pre,suf;
		int len = s.length();
		for(int i=0;i<len/2;i++){
			if(s[i] == s[len-1-i]){
				pre += s[i];
			}
			else{
				break;
			}
		}
		int start = pre.length();
		for(int i=start-1;i>=0;i--){
			suf +=pre[i];
		}
		int l = len - 2*(pre.length());
		s = s.substr(start,l);
		len = s.length();
		int dp[len][len];
		memset(dp,0,sizeof(dp));
		for(int i=0;i<len;i++){
			dp[i][i] = 1;
		}
		for(int i=0;i<len-1;i++){
			if(s[i] == s[i+1]){
				dp[i][i+1] = 1;
			}
		}
		for(int k=3;k<=len;k++){
			for(int i=0;i<len-k+1;i++){
				int j = i+k-1;
				if(dp[i+1][j-1] && s[i]==s[j]){
					dp[i][j] = 1;
				}
			}
		}
		string mid1,mid2;
		for(int i=len-1;i>=0;i--){
			if(dp[0][i] == 1){
				mid1 = s.substr(0,i+1);
				break;
			}
		}
		for(int i=0;i<len-1;i++){
			if(dp[i][len-1] == 1){
				mid2 = s.substr(i,len-i);
				break;
			}
		}
		string ans;
		if(pre.length() == 0){
			if(mid1.length()>mid2.length()){
				ans = mid1;
			}
			else{
				ans = mid2;
			}
		}
		else{
			ans = pre;
			if(mid1.length()>mid2.length()){
				ans += mid1;
			}
			else{
				ans += mid2;
			}
			ans += suf;
		}
		cout<<ans<<endl;
	}
}