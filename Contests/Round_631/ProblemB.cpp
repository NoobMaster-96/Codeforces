#include<bits/stdc++.h>
using namespace std;
int p1[200001];
int p2[200001];

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
		vector<pair<int,int>> ans;
		memset(p1,0,sizeof(p1));
		memset(p2,0,sizeof(p2));
		bool seq = 0;
		for(int i=0;i<n;i++){
			if(seq == 0){
				if(p1[a[i]] == 0){
					p1[a[i]] = 1;
				}
				else{
					seq = 1;
					p2[a[i]] = 1;
				}
			}
			else{
				if(p2[a[i]] == 0){
					p2[a[i]] = 1;
				}
				else{
					break;
				}
			}
		}
		int l1=0,l2=0;
		for(int i=1;i<=n;i++){
			if(p1[i] == 1){
				l1++;
			}
			else{
				break;
			}
		}
		for(int i=1;i<=n;i++){
			if(p2[i] == 1){
				l2++;
			}
			else{
				break;
			}
		}
		if(l1+l2 == n){
			ans.push_back(make_pair(l1,l2));
		}
		memset(p1,0,sizeof(p1));
		memset(p2,0,sizeof(p2));
		seq = 0;
		for(int i=n-1;i>=0;i--){
			if(seq == 0){
				if(p1[a[i]] == 0){
					p1[a[i]] = 1;
				}
				else{
					seq = 1;
					p2[a[i]] = 1;
				}
			}
			else{
				if(p2[a[i]] == 0){
					p2[a[i]] = 1;
				}
				else{
					break;
				}
			}
		}
		l1=0,l2=0;
		for(int i=1;i<=n;i++){
			if(p1[i] == 1){
				l1++;
			}
			else{
				break;
			}
		}
		for(int i=1;i<=n;i++){
			if(p2[i] == 1){
				l2++;
			}
			else{
				break;
			}
		}
		if(l1+l2 == n){
			ans.push_back(make_pair(l2,l1));
		}
		int num = ans.size();
		if(num == 2){
			if(ans[0].first == ans[1].first){
				num--;
			}
		}
		cout<<num<<endl;
		for(int i=0;i<num;i++){
			cout<<ans[i].first<<" "<<ans[i].second<<endl;
		}
	}
	return 0;
}