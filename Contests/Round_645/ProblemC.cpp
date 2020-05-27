#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	int t;
	cin>>t;
	while(t--){
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		if(x1==x2 || y1==y2){
			cout<<1<<endl;
			continue;
		}
		lli ans = (lli)abs(x2-x1)*(lli)abs(y2-y1) + (lli)1;
		cout<<ans<<endl;
	}
}