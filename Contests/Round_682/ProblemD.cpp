#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int
#define mod 998244353

lli fact(lli n){ 
    lli res = 1; 
    for (lli i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 

lli nCr(lli n, lli r){ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 

int main(){
    lli n,k;
    cin>>n>>k;
    vector<lli> a(n),b(n);
    for(int i=0;i<n;i+=1){
        cin>>a[i]>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    lli ans = 0;
    int i=0,j=0,previ=0,prevj=0;
    while(i<n && j<n){
        if(a[i]<=b[j]){
            i+=1;
        }
        else{
            if(previ-j>=k){
                ans -= nCr(previ-j,k);
            }
            ans += nCr(i-j,k);
            previ = i;
            prevj = j;
            j+=1;
        }
    }
    if(previ-j>=k){
        ans -= nCr(previ-j,k);
    }
    ans += nCr(i-j,k);
    cout<<ans;
}
