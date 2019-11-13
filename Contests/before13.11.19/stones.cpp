#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int a,b,c;
		cin>>a>>b>>c;
		int ans=0;
		if(b==0){
			cout<<"0 \n";
			continue;
		}
		if(b>(c/2)){
			b=b-(c/2);
			ans+=(c/2)*3;
			//cout<<ans;
		}
		else{
			ans+=b*3;
			b=0;
		}
		if(a>(b/2)){
			a=a-(b/2);
			ans+=(b/2)*3;
			//cout<<ans;
		}
		else{
			ans+=a*3;
			a=0;
		}
		cout<<ans<<"\n";
	}
}