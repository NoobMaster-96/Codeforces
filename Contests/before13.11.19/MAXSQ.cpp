#include<bits/stdc++.h>
using namespace std;

int main(){

	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		int n;
		cin>>n;
		vector<int> a(n,0);
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		sort(a.begin(),a.end());
		int min = a[0];
		int max = a[n-1];
		int ans = 1;
		for(int j = 1;j<=max;j++){
			int count = 0;
			for(int k=0;k<n;k++){
				if(a[k]>=j){
					count++;
				}
				if(count==j){
					ans=j;
					break;
				}
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}