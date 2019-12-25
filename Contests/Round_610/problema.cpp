#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,r;
		cin>>a>>b>>c>>r;
		int x = c-r;
		int y = c+r;
		int ans = 0;
		if(a>b){
			int temp = b;
			b = a;
			a = temp;
		}
		if(a<=x){
			ans += x-a;
		}
		else{
			if(a>y){
				cout<<b-a<<endl;
				continue;
			}
		}
		if(b>=y){
    		ans += (b-y);
    	}else{
    		if(b<x){
    			cout<<b-a<<endl;
    			continue;
    		}
    	}
    	cout<<ans<<endl;
	}
}