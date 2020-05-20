#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		vector<int> a[k];
		int num = 0;
		for(int i=0;i<n;i++){
			if(s[i] == '0'){
				a[i%k].push_back(0);
			}
			else{
				a[i%k].push_back(1);
				num++;
			}
		}
		int ans = s.length();
		vector<int> val(k);
		for(int i=0;i<k;i++){
			int temp = 0;
			for(int j=0;j<a[i].size();j++){
				if(a[i][j]==1){
					temp++;
				}
			}
			val[i] = temp;
		}
		for(int i=0;i<k;i++){
			int cnt1 = 0;
			int len = a[i].size();
			int j = a[i].size()-1;
			while(j>=0){
				if(a[i][j]==0){
					len--;
				}
				else{
					break;
				}
				j--;
			}
			int idx = 0;
			while(idx<len){
				if(a[i][idx]==1){
					int flips = cnt1+(len-idx)-(val[i]-cnt1);
					flips += (num-val[i]);
					ans = min(ans,flips);
					cnt1++;
				}
				idx++;
			}
		}
		if(num==0){
			ans = 0;
		}
		cout<<ans<<endl;
	}
}