#include<bits/stdc++.h>
#include<math.h>
using namespace std;

bool isPrime(long long int n) 
{ 
    if (n <= 1) 
        return false;
    long long int val = sqrt(n);
    for (long long int i = 2; i <= val; i++) 
        if (n % i == 0) 
            return false; 
    return true; 
}
long long int D(long long int n){  
    long long int ans = n;
    
    for(long long int i = 2;i<=sqrt(n);i++){
        if(n%i==0){
            ans = __gcd(ans,i);
            ans = __gcd(ans,n/i);
        }
    }
    return ans;
}
int main(){
	long long int n;
	cin>>n;
	long long int ans;
	if(n==1){
		ans=1;
		cout<<ans;
		return 0;
	}
	bool check = isPrime(n);
	if(check==1){
		ans = n;
		cout<<ans;
		return 0;
	}
	else{
		ans = D(n);
		cout<<ans;
		return 0;
	}

	return 0;
}