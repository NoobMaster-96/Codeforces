#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	vector<int> interval;
    	vector<int> ele;
    	int len = 0;
    	int currele = s[0]-'0';
    	for(int i=0;i<s.length();i++){
    		if(s[i]-'0'==currele){
    			len++;
    		}
    		else{
    			interval.push_back(len);
    			ele.push_back(currele);
    			currele = s[i]-'0';
    			len = 1;
    		}
    	}
    	interval.push_back(len);
    	ele.push_back(currele);
    	int n = interval.size();
   		vector<int> one(n+1);
   		vector<int> zero(n+1);
		one[0] = 0;
		for(int i=1;i<=n;i++){
			if(ele[i-1]==1){
				one[i] = one[i-1];
			}
			else{
				one[i] = one[i-1]+interval[i-1];
			}
		}
		zero[n] = 0;
		for(int i=n-1;i>=0;i--){
			if(ele[i]==0){
				zero[i] = zero[i+1];
			}
			else{
				zero[i] = zero[i+1]+interval[i];
			}
		}
		int ans = s.length();
		for(int i=0;i<=n;i++){
			ans = min(ans,one[i]+zero[i]);
		}
		one[n] = 0;
		for(int i=n-1;i>=0;i--){
			if(ele[i]==1){
				one[i] = one[i+1];
			}
			else{
				one[i] = one[i+1]+interval[i];
			}
		}
		zero[0] = 0;
		for(int i=1;i<=n;i++){
			if(ele[i-1]==0){
				zero[i] = zero[i-1];
			}
			else{
				zero[i] = zero[i-1]+interval[i-1];
			}
		}
		for(int i=0;i<=n;i++){
			ans = min(ans,one[i]+zero[i]);
		}
		cout<<ans<<endl;
    }
}