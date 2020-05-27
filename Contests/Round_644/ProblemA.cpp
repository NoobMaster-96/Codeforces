#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int x = min(a,b);
		int y = max(a,b);
		int l = max(2*x,y);
		cout<<l*l<<endl;
	}
}