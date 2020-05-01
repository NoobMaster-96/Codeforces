#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,d;
		cin>>n>>k>>d;
		vector<int > shows(n,0);
		for(int i=0;i<n;i++){
			cin>>shows[i];
		}
		int ans = k;
		vector<int > day(d,0);
		for(int i=0;i<=n-d;i++){
			for(int j=i,l=0;j<i+d;j++,l++){
				day[l] = shows[j];
			}
			sort(day.begin(),day.end());
			vector<int>::iterator ip; 
    		ip = unique(day.begin(), day.end());
    		int ans_ = distance(day.begin(), ip);
    		//cout<<ans_;
    		if(ans_<ans){
    			ans=ans_;
    		}
		}
		cout<<ans<<endl;
	}
	return 0;
}