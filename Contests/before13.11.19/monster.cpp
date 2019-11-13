#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0);
  	cout.tie(0);
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int n,r;
		cin>>n>>r;
		vector<int> M(n,0);
		for(int j=0;j<n;j++){
			cin>>M[j];
		}
		sort(M.begin(), M.end());
		int count=0,m=M[n-1],idx=n-1,d=0;
		while(true){
			if(d==n)
				break;
			for(int k=idx;k>=0&&M[k]>0;k--){
				if(M[k]==m){
    				M[k] = 0;
    				idx = k-1;
    				d++;
    			}
    			else{
    				M[k] -=r;
    				if(M[k]<=0){
    					d++;
    				}
    			}
			}
			m=M[idx];
			count++;
		}
		cout<<count<<"\n";
	}
}