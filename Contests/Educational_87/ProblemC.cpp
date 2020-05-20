#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 

int main(){
	int t;
	cin>>t;
	while(t--){
		double n;
		cin>>n;
		double an = (180.0+(2.0*n-3.0)*180.0)/(2.0*n);
		double a = an;
		double ans = 0.0;
		for(int i=1;i<n;i++){
			ans += abs(sin((180.0-a)*3.1415926/180.0));
			a = an-(180.0-a);
		}
		cout<<setprecision(10)<<ans<<endl;
	}
}