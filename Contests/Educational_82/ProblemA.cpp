#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len = s.length();
		vector<int> pos;
		for(int i=0;i<len;i++){
			if(s[i] == '1'){
				pos.push_back(i);
			}
		}
		int ans = 0;
		for(int i=1;i<pos.size();i++){
			ans+=(pos[i]-pos[i-1]-1);
		}
		cout<<ans<<endl;
	}
}