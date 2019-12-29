#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k1, k2;
		cin>>n>>k1>>k2;
		int maxk1 = 0, maxk2 = 0;
		for(int i=0;i<k1;i++){
			int temp;
			cin>>temp;
			maxk1 = max(maxk1,temp);
		}
		for(int i=0;i<k2;i++){
			int temp;
			cin>>temp;
			maxk2 = max(maxk2,temp);
		}
		if(maxk1>maxk2){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}