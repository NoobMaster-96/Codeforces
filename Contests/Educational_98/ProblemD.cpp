#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
ll m = 998244353;

int gcd(int a, int b){ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

ll modexp(ll x, ll n){ 
    if (n == 0) { 
        return 1; 
    } 
    else if (n % 2 == 0) { 
        return modexp((x * x) % m, n / 2); 
    } 
    else { 
        return (x * modexp((x * x) % m, (n - 1) / 2) % m); 
    } 
} 

ll calpower(ll x, unsigned ll y, ll p) {  
    ll res = 1;     
    x = x % p;
    if (x == 0) return 0; 
    while (y > 0){  
        if (y & 1) {
            res = (res*x) % p;  
        }
        y = y>>1;
        x = (x*x) % p;  
    }  
    return res;  
}

ll gcdExtended(ll a, ll b, ll* x, ll* y); 

ll minverse(ll a, ll m){ 
    ll x, y; 
    ll g = gcdExtended(a, m, &x, &y); 
    if (g != 1) 
        return 0;
    else{
        ll res = (x % m + m) % m; 
        return res; 
    } 
} 

ll gcdExtended(ll a, ll b, ll* x, ll* y){ 
    if (a == 0){ 
        *x = 0, *y = 1; 
        return b; 
    }
    ll x1, y1;
    ll gcd = gcdExtended(b % a, a, &x1, &y1); 
    *x = y1 - (b / a) * x1; 
    *y = x1; 
  
    return gcd; 
} 

ll getFractionModulo(ll a, ll b){ 
    ll c = gcd(a, b); 
  
    a = a / c; 
    b = b / c; 
  
    ll d = modexp(b, m - 2); 
    ll ans = ((a % m) * (d % m)) % m; 
  
    return ans; 
} 
  

int main(){
	int t=1;
	//cin>>t;
	while(t--){
		ll n,a,b;
        cin>>n;
        if(n==1){
            a = 1;
        }
        else if(n==3){
            a = 2;
        }
        else if(n==2){
            a = 1;
        }
        else{
            ll osum = 3;
            ll esum = 2;
            ll current;
            for(int i=4;i<=n;i++){
                if(i%2==0){
                    current = osum;
                    esum=(esum +current)%m;
                }
                else{
                    current = esum;
                    osum=(osum+current)%m;
                }
            }
            a = current;
        }
        b = calpower(2,n,m);
        b = minverse(b,m);
        cout<<(a*b)%m<<endl;        
    }
}