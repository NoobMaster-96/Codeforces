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
    	int n;
    	cin>>n;
    	vector<int> a(n),b(n);
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    	}
    	for(int i=0;i<n;i++){
    		cin>>b[i];
    	}
    	int cnt1 = 0, cnt0 = 0;
    	for(int i=0;i<n;i++){
    		if(b[i]==1){
    			cnt1++;
    		}
    		else{
    			cnt0++;
    		}
    	}
    	vector<int> a_ = a;
    	sort(a_.begin(),a_.end());
    	bool check = true;
    	for(int i=0;i<n;i++){
    		if(a_[i]!=a[i]){
    			check = false;
    			break;
    		}
    	}
    	if(check){
    		cout<<"Yes"<<endl;
    		continue;
    	}
    	else{
    		if(min(cnt0,cnt1)==0){
    			cout<<"No"<<endl;
    		}
    		else{
    			cout<<"Yes"<<endl;
    		}
    	}
    }
}