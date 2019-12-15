#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int len = str.length();
		if(str[len-1]=='o'){
			cout<<"FILIPINO"<<endl;
		}
		else if(str[len-1]=='u'){
			cout<<"JAPANESE"<<endl;
		}
		else{
			cout<<"KOREAN"<<endl;
		}
	}
	return 0;
}