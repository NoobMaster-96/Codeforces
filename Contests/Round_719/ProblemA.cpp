#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		vector<int> idx(26,-1);
		bool sus = false;
		for(int i=0;i<n;i+=1){
			if(idx[s[i]-'A']!=-1 && idx[s[i]-'A']!=i-1){
				sus = true;
				break;
			}
			else{
				idx[s[i]-'A'] = i;
			}
		}
		if(!sus){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}