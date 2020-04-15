#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		vector<bool> visited(26,0);
		string str = "";
		int idx = 0;
		for(int i=0;i<a;i++){
			str += idx + 'a';
			idx = (idx+1)%b;
		}
		string ans = "";
		idx = 0;
		for(int i=0;i<n;i++){
			ans += str[idx];
			idx = (idx+1)%a;
		}
		cout<<ans<<endl;
	}
}