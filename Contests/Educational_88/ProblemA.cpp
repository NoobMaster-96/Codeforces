#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int num = n/k;
		if(m<=num){
			cout<<m<<endl;
		}
		else{
			int x = num;
			m -= num;
			int y = ceil((double)m/(double)(k-1));
			cout<<x-y<<endl;
		}
	}
}