#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		int h,n,m;
		cin>>h>>n>>m;
		while(h>20 && n>0){
			h = h/2 + 10;
			n--;
		}
		if(h%10 == 0){
			if(h/10 <= m){
				cout<<"YES"<<endl;
				continue;
			}
			else{
				cout<<"NO"<<endl;
				continue;
			}
		}
		else{
			if(h/10 +1 <= m){
				cout<<"YES"<<endl;
				continue;
			}
			else{
				cout<<"NO"<<endl;
				continue;
			}
		}
	}
}