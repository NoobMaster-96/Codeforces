#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(k==1){
			cout<<"YES"<<endl<<n<<endl;
			continue;
		}
		if(n%2==1 && k%2==0){
			cout<<"NO"<<endl;
			continue;
		}
		vector<int> ans(k,0);
		if((n-k)%2==0){
			for(int i=0;i<k;i++){
				ans[i] += 1;
			}
			n -= k;
			if(n<0){
				cout<<"NO"<<endl;
				continue;
			}
			if(n>0){
				ans[0] += 2;
				ans[1] += n-2;
			}
		}
		else if((n-(2*k))%2==0){
			for(int i=0;i<k;i++){
				ans[i] += 2;
			}
			n -= 2*k;
			if(n<0){
				cout<<"NO"<<endl;
				continue;
			}
			ans[0] += n;
		}
		cout<<"YES"<<endl;
		for(auto i:ans){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}