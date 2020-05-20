#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int s;
		cin>>s;
		vector<int> ans;
		int n = 10;
		while(n<s){
			if(s%n !=0){
				ans.push_back(s%n);
				s -= s%n;
			}
			n*= 10;
		}
		if(s!=0){
			ans.push_back(s);
		}
		cout<<ans.size()<<endl;
		for(auto i: ans){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}