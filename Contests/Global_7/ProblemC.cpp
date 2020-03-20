#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main(){
    
        ll n,k;
        cin>>n>>k;
        vector<ll> p(n);
        vector<ll> pos(n+1);
        for(ll i=0;i<n;i++){
            cin>>p[i];
            pos[p[i]] = i;
        }
        ll val = (k*(n-k+1+n)/2);
        vector<ll> indexes(k);
        ll no = 1;
        for(ll i=0;i<k;i++){
            indexes[i] = pos[n-i];
        }
        sort(indexes.begin(),indexes.end());
        ll mod = 998244353;
        for(ll i=1;i<k;i++){
            ll num = indexes[i]-indexes[i-1];
            no = (no*num)%mod;
        }
        cout<<val<<" "<<no;

    }
