#include<bits/stdc++.h>
using namespace std;
bool prime[10000025];
void isprime(int n){
	for(int i=0;i<n+1;i++){
		prime[i] = true;
	}
	prime[0] = false;
	prime[1] = false;
	for(int i=2;i*i<=n;i++){
		if(prime[i]){
			for(int j=i*i;j<=n;j+=i){
				prime[j] = false;
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	isprime(10000025);
	int a = 20;
	int b = 20+n;
	if(prime[b]){
		b++;
		a++;
	}
	cout<<b<<" "<<a<<endl;
}