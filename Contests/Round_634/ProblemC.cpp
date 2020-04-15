#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> skill(n);
		map<int,int> m;
		int maxe = 0;
		for(int i=0;i<n;i++){
			cin>>skill[i];
			m[skill[i]]++;
			maxe = max(m[skill[i]],maxe);
		}
		int total = m.size();
		total--;
		int ans = min(total,maxe);
		if(total<maxe){
			if(maxe-total>1){
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}