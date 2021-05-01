#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main(){
    int n;
    cin>>n;
    vector<ll> a(n), b(n);
    for(int i=0;i<n;i+=1){
        cin>>a[i];
    }
    for(int i=0;i<n;i+=1){
        cin>>b[i];
    }
    vector<ll> sop(n+1,0);
    for(int i=0;i<n;i+=1){
        sop[i+1] = sop[i] + (a[i]*b[i]);
    }
    ll ans = sop[n];
    for(int c=0;c<n;c+=1){
        ll cursop = a[c]*b[c];
        for(int l=c-1, r=c+1;l>=0 && r<n;l-=1,r+=1){
            cursop += a[l]*b[r];
            cursop += a[r]*b[l];
            ans = max(ans,cursop+sop[l]+sop[n]-sop[r+1]);
        }
        cursop = 0;
        for(int l=c, r=c+1;l>=0 && r<n;l-=1,r+=1){
            cursop += a[l]*b[r];
            cursop += a[r]*b[l];
            ans = max(ans,cursop+sop[l]+sop[n]-sop[r+1]);
        }
    }
    cout<<ans<<endl;
}