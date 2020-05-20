#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		vector<int> b(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end(),greater<int>());
		int sum = 0;
		int i=0;
		for(;i<k;i++){
			if(a[i]<=b[i]){
				sum += b[i];
			}
			else{
				break;
			}
		}
		for(;i<n;i++){
			sum += a[i];
		}
		cout<<sum<<endl;
	}
}