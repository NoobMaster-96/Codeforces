#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int l =str.length();
		string stre,stro;
		for(int i=0;i<l;i++){
			int a = str[i] - '0';
			//cout<<a<<endl;
			if(a%2==0){
				stre.push_back(str[i]);
			}
			else if(a%2==1){
				stro.push_back(str[i]);
			}
		}
		//cout<<stre<<endl;
		//cout<<stro<<endl;
		int j=0,k=0;
		string ans;
		while(j<stre.length() && k<stro.length()){
			if(stre[j]<stro[k]){
				ans.push_back(stre[j]);
				j++;
			}
			else{
				ans.push_back(stro[k]);
				k++;
			}
		}
		if(k==stro.length()){
			for(;j<stre.length();j++){
				ans.push_back(stre[j]);
			}
		}
		else if(j==stre.length()){
			for(;k<stro.length();k++){
				ans.push_back(stro[k]);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}