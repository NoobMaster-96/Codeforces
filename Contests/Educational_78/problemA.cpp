#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string p,h;
		cin>>p>>h;
		int lenp = p.length();
		int lenh = h.length();
		if(lenp>lenh){
			cout<<"NO"<<endl;
			continue;
		}
		bool check = 0;
		sort(p.begin(),p.end());
		for(int i=0;i<lenh-lenp+1;i++){
			string p_ = h.substr(i,lenp);
			sort(p_.begin(),p_.end());
			if(p==p_){
				check = 1;
				break;
			} 
		}
		if(check==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}