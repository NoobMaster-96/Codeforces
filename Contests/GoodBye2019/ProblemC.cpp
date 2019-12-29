#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin >> t;
    while (t--){
    	int n;
    	cin>>n;
    	vector<int> a(n);
    	long long int sum = 0;
    	long long int x = 0;
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		sum += a[i];
    		x ^= a[i];
    	}
    	vector<long long int> ans;
    	if(sum != 2*x){
    		if(x == 0){
    			ans.push_back(sum);
    		}
    		else{
    			sum += x;
    			ans.push_back(x);
    			ans.push_back(sum);
    		}
    	}
    	cout<<ans.size()<<endl;
    	for(int i=0; i<ans.size(); i++){
    		cout<<ans[i]<<" ";
    	}
    	cout<<endl;
    }
}