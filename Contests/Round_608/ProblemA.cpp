#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d,e,f;
		cin>>a>>b>>c>>d>>e>>f;
		if(e>f){
			int cost1 = min(a,d)*e;
			d -= min(a,d);
			int cost2 = (min(b,min(c,d)))*f;
			int ans = cost1+cost2;
			cout<<ans<<endl;
		}
		else{
			int cost1 = (min(b,min(c,d)))*f;
			d -= min(b,min(c,d));
			int cost2 = min(a,d)*e;
			int ans = cost1+cost2;
			cout<<ans<<endl;
		}
}