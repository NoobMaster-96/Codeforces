#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        lli a,b,x,y,n,k=LONG_MAX, l=LONG_MAX, m=LONG_MAX, p=LONG_MAX;
        cin>>a>>b>>x>>y>>n;
        if(x>a-n){
            lli rem=a-x;
            k = max(y, b-(n-rem))*(x);
        }
        else{
            k=(a-n)*b;
        }
        if(y>b-n){
            lli rem=b-y;
            l = max(x, a-(n-rem))*(y);
        }
        else{
            l=(b-n)*a;
        }
        cout<<(min(k,l))<<endl;
    }
}