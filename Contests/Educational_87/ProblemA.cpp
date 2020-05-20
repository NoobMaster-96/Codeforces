#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(a<=b){
			cout<<b<<endl;
			continue;
		}
		if(c<=d){
			cout<<-1<<endl;
			continue;
		}
		lli total = (lli)b;
		total += ((lli)(a-b)/(lli)(c-d))*(lli)c;
		if((a-b)%(c-d) != 0){
			total += (lli)c;
		}
		cout<<total<<endl;
	}
}