#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int
int ch[26];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		memset(ch,0,sizeof(ch));
		for(int i=0;i<s.length();i++){
			ch[s[i]-'a']++;
		}
		vector<string> a(k);
		int idx = 0;
		for(int i=0;i<k;i++){
			while(ch[idx]==0){
				idx++;
			}
			a[i] += idx + 'a';
			ch[idx]--;
		}
		sort(a.begin(),a.end());
		if(a[k-1]!=a[0]){
			cout<<a[k-1]<<endl;
			continue;
		}
		int cnt = 0;
		for(int i=0;i<26;i++){
			if(ch[i]>0){
				cnt++;
			}
		}
		if(cnt>1){
			for(int i=0;i<26;i++){
				while(ch[i]>0){
					a[0] += (i + 'a');
					ch[i]--;
				}
			}
			sort(a[0].begin(),a[0].end());
			cout<<a[0]<<endl;
			continue;
		}
		int num = 0;
		int key = 0;
		for(int i=0;i<26;i++){
			if(ch[i]!=0){
				num = ch[i];
				key = i;
				break;
			}
		}
		int m = num/k;
		if(num%k!=0){
			m++;
		}
		for(int i=0;i<m;i++){
			a[0] += key + 'a';
		}
		cout<<a[0]<<endl;
	}
}