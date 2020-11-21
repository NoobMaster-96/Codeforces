#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    lli t;
    cin>>t;
    while(t--){
        lli n,x;
        cin>>n>>x;
        vector<lli> a(n);
        for(lli i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        lli ans = 0;
        lli i=0;
        while(i<n && a[i]>=x){
            ans++;
            i++;
        }
        lli cnt = 0;
        lli temp = 0;
        while(i<n){
            if(temp<x){
                cnt++;
                temp = a[i]*cnt;
            }
            else{
                ans++;
                cnt = 1;
                temp = a[i];
            }
            i++;
        }
        if(temp>=x){
            ans++;
        }
        cout<<ans<<endl;
    }
}