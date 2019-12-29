#include<bits/stdc++.h>
using namespace std;
const int inf = (int)1e9;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n+1);
		int b = -1, s = inf;
		bool flag = false;
		for(int i=1; i<=n; i++){
			cin>>a[i];
		}
		vector<int> ans;
		for(int i=1; i<n; i++){
			if(abs(a[i]-a[i+1])>=2){
				ans.push_back(i);
				ans.push_back(i+1);
				flag = true;
				break;
			}
		}
		if(flag == true){
			cout<<"YES"<<endl<<ans[0]<<" "<<ans[1]<<endl;
		}
		else{
			cout<<"NO"<<endl;
		} 
	}
}