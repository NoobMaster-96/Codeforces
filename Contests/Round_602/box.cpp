#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector<int> q(n);
		for(int j=0;j<n;j++){
			cin>>q[j];
		}
		vector<int> check(n+1,1);
		vector<int> ans(n,-1);
		bool check_ = 1;
		for(int j=0;j<n;j++){
			if(q[j]>n){
				cout<<-1<<endl;
				check_ = 0;
				break;
			}
			if(check[q[j]] != 0){
				ans[j] = q[j];
				check[q[j]] = 0;
			}
		}
		bool state = 1;
		if(check_ == 1){
			for(int j=1;j<n;j++){
				if(ans[j]==-1){
					//cout<<"#"<<j<<endl;
					bool found = 0;
					//for(int l=1;l<n+1;l++){
					//	cout<<check[l]<<endl;
					//}
					for(int k=ans[j-1];k>=1;k--){
						if(check[k] == 1){
							ans[j] = k;
							found = 1;
							check[k] = 0;
							break;
						}
					}
					if(found == 0){
						cout<<-1<<endl;
						state = 0;
						break;
					}
				}
			}
			if(state == 1){
				for(int j=0;j<n;j++){
					cout<<ans[j]<<" ";
				}
				cout<<endl;
			}
		}
	}
	return 0;
}