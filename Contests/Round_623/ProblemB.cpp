#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,p;
		string s;
		cin>>a>>b>>p>>s;
		int len = s.length();
		vector<int> sum(len,0);
		for(int i=len-2;i>=0;i--){
			if(s[i] == 'A'){
				sum[i] = sum[i+1]+a;
			}
			else{
				sum[i] = sum[i+1]+b;
			}
			int j = i;
			for(;j>=0;j--){
				if(s[j]!=s[i]){
					break;
				}
				sum[j] = sum[i];
			}
			i=j+1;
		}
		int idx = len;
		for(;idx>0;idx--){
			if(sum[idx-1]>p){
				break;
			}
		}
		idx++;
		cout<<idx<<endl;
	}
}