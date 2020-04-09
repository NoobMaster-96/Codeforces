#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		vector<int> a(1001,0);
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			a[temp] = 1;
		}
		for(int i=1;i<=1000;i++){
			if(a[i]){
				continue;
			}
			else{
				if(x>0){
					a[i] = 1;
					x -= 1;
				}
				else{
					break;
				}
			}
		}
		int ans = 0;
		for(int i=1;i<=1000;i++){
			if(a[i]){
				ans++;
			}
			else{
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}