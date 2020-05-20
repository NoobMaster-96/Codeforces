#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		int ans = 0;
		int cnt = 0;
		int temp = -1;
		for(int i=0;i<n;i++){
			if(cnt == 0){
				temp = a[i];
			}
			if(a[i]>temp){
				temp = a[i];
			}
			cnt++;
			if(temp==cnt){
				ans++;
				cnt = 0;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}