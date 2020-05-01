#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int
int val[100000];

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return gcd(b%a,a);
}

int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,q;
		cin>>a>>b>>q;
		int n = lcm(a,b);
		memset(val,0,sizeof(val));
		cout<<n<<endl;
		for(int i=1;i<n;i++){
			val[i] = val[i-1];
			if((i%a%b) != (i%b%a)){
				val[i]++;
			}
			cout<<val[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<q;i++){
			lli l,r;
			cin>>l>>r;
			lli ans = ((lli)val[n-1]*(r/n)+(lli)val[r%n])-((lli)val[n-1]*((l-1)/n)+(lli)val[(l-1)%n]);
			cout<<ans<<" ";
		}
		cout<<endl;
	}
}