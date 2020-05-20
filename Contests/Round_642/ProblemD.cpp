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
		vector<int> a(n,0);
		vector<int> s[n+1];
		s[n].push_back(0);
		int num = 1;
		for(int i=n;i>0;i--){
			if(s[i].size()>0){
				sort(s[i].begin(),s[i].end());
				for(int j=0;j<s[i].size();j++){
					int start = s[i][j];
					int end = start+i-1;
					int idx;
					if((end-start+1)%2==1){
						idx = (start+end)/2;
					}
					else{
						idx = (start+end-1)/2;
					}
					a[idx] = num;
					num += 1;
					s[end-idx].push_back(idx+1);
					s[idx-start].push_back(start);
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}