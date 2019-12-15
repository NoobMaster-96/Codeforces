#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	int cntW=0,cntB=0;
	vector<int> ans;
	for(int i=0;i<n;i++){
		if(str[i]=='W'){
			cntW++;
		}
		else{
			cntB++;
		}
	}
	if(cntB % 2 == 1 && cntW % 2 == 1){
		cout<<-1<<endl;
		return 0;
	}
	else if(cntB == 0 || cntW == 0){
		cout<<0<<endl;
		return 0;
	}
	else if(cntB % 2 == 1 && cntW % 2 == 0){
		int idx = 0;
		while(idx<n-1){
			if(str[idx]=='W'){
				if(str[idx+1]=='B'){
					str[idx] = 'B';
					str[idx+1] = 'W';
					ans.push_back(idx+1);
				}
				else{
					str[idx] = 'B';
					str[idx+1] = 'B';
					ans.push_back(idx+1);
				}
			}
			idx++;
		}
	}
	else if(cntB % 2 == 0 && cntW % 2 == 1){
		int idx = 0;
		while(idx<n-1){
			if(str[idx]=='B'){
				if(str[idx+1]=='W'){
					str[idx] = 'W';
					str[idx+1] = 'B';
					ans.push_back(idx+1);
				}
				else{
					str[idx] = 'W';
					str[idx+1] = 'W';
					ans.push_back(idx+1);
				}
			}
			idx++;
		}
	}
	else if(cntB % 2 == 0 && cntW % 2 == 0){
		int idx = 0;
		if(cntW>cntB){
			while(idx<n-1){
				if(str[idx]=='W'){
					if(str[idx+1]=='B'){
						str[idx] = 'B';
						str[idx+1] = 'W';
						ans.push_back(idx+1);
					}
					else{
						str[idx] = 'B';
						str[idx+1] = 'B';
						ans.push_back(idx+1);
					}
				}
				idx++;
			}
		}
		else{
			while(idx<n-1){
				if(str[idx]=='B'){
					if(str[idx+1]=='W'){
						str[idx] = 'W';
						str[idx+1] = 'B';
						ans.push_back(idx+1);
					}
					else{
						str[idx] = 'W';
						str[idx+1] = 'W';
						ans.push_back(idx+1);
					}
				}
				idx++;
			}
		}
	}
	int len = ans.size();
	cout<<len<<endl;
	for(int i=0;i<len;i++){
		cout<<ans[i]<<" ";
	}

}