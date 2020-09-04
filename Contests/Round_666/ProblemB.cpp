#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int
#define inf LLONG_MAX

int main(){
    lli n;
    cin>>n;
    vector<lli> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(n>=35){
        lli ans = 0;
        for(int i=0;i<n;i++){
            ans += (a[i]-(lli)1);
        }
        cout<<ans<<endl;
    }
    else{
        lli ans = LLONG_MAX;
        if(n==1){
            cout<<(a[0]-(lli)1)<<endl;
        }
        for(lli i=1;i<1e5+5;i++){
            if(pow(i,n-1)>1e18){
                break;
            }
            lli val = 0;
            for(lli j=0;j<n;j++){
                lli x = pow(i,j);
                val += abs(a[j]-x);
            }
            if(ans>val){
                ans = val;
            }
        }
        cout<<ans<<endl;
    }
}