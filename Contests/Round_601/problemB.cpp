#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int n,m;
		cin>>n>>m;
		vector<int> weights(n,0);
		for(int j=0;j<n;j++){
			cin>>weights[j];
		}
		if(n==2){
			cout<<-1<<endl;
		}
		else if(m<n){
			cout<<-1<<endl;
		}
		else if(n==m){
			long long int sum = 0;
			for(int j=0;j<n;j++){
				sum += (2*weights[j]);
			}
			cout<<sum<<endl;
			for(int j=0;j<n;j++){
				if(j!=n-1){
					cout<<j+1<<" "<<j+2<<endl;
				}
				else{
					cout<<j+1<<" "<<1<<endl;
				}
			}
		}
	}
}
