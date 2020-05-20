#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int start = 0,end = 0;
		unordered_map<int,int> m;
		for(;end<s.length();end++){
			m[s[end]-'0']++;
			if(m.size()==3){
				break;
			}
		}
		end++;
		int ans = 0;
		if(m.size()==3){
			ans = end;
		}
		while(end<=s.length()){
			if(m.size()==3){
				ans = min(ans,end-start);
				m[s[start]-'0']--;
				if(m[s[start]-'0']==0){
					m.erase(s[start]-'0');
				}
				start++;
			}
			else{
				m[s[end]-'0']++;
				end++;
			}
		}
		cout<<ans<<endl;
	}
}