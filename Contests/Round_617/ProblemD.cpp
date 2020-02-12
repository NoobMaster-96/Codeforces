#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,k;
	cin>>n>>a>>b>>k;
	vector<int> monster(n);
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>monster[i];
		if(monster[i]%(a+b)==0){
			monster[i] = a+b;
		}
		else{
			monster[i] = monster[i]%(a+b);
		}
	}
}