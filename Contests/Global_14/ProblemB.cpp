#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void solution(){
	int n;
	cin>>n;
	int cntbit = 0;
	if((n&1)==1){
		cout<<"NO"<<endl;
		return;
	}
	int x = sqrt(n);
	int y = sqrt((n/2));
	if(x*x==n){
		cout<<"YES"<<endl;
	}
	else if(y*y==(n/2)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

}

int main(){
	int t;
	cin>>t;
	while(t--){
		solution();
	}
}