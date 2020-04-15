#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		vector<int> b[27];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[a[i]].push_back(i);
		}
		int maxlen = 0;
		for(int i=1;i<=26;i++){
			int temp = b[i].size();
			if(temp>0){
				int s = b[i][0];
				int e = b[i][temp-1];
				map<int,int> m1;
				map<int,int> m2;
				for(int j=0;j<s;j++){
					m1[a[j]]++;
				}
				for(int j=e+1;j<n;j++){
					m2[a[j]]++;
				}
				int len = 0;
				for(int j=0;j<s;j++){
					int temp = min(m1[a[j]],m2[a[j]]);
					len = max(len,temp);
				}
				maxlen = max(maxlen,2*len+temp);
				if(temp%2==0){
					s = b[i][(temp-1)/2];
					e = b[i][temp/2];
					map<int,int> m;
					int len = 0;
					for(int j=s+1;j<e;j++){
						m[a[j]]++;
						len = max(len,m[a[j]]);
					}
					maxlen = max(maxlen,temp+len);
				}
				else{
					s = b[i][(temp/2)-1];
					e = b[i][(temp/2)+1];
					map<int,int> m;
					int len = 0;
					for(int j=max(0,s+1);j<e;j++){
						m[a[j]]++;
						len = max(len,m[a[j]]);
					}
					maxlen = max(maxlen,temp+len);
				}
			}
		}
		cout<<maxlen<<endl;
	}
}