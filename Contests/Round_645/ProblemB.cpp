#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> g(n);
		for(int i=0;i<n;i++){
			cin>>g[i];
		}
		sort(g.begin(),g.end());
		int ans = 1;
		for(int i=0;i<n;i++){
			if(ans>=g[i]){
				ans++;
			}
			else{
				int j=i;
				int temp = 0;
				while(j<n){
					if(ans+temp>=g[j]){
						ans += (temp+1);
						break;
					}
					temp++;
					j++;
				}
				i=j;
			}
		}
		cout<<ans<<endl;
	}
}