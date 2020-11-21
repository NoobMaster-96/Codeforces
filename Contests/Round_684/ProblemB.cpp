#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n*k);
        for(int i=0;i<n*k;i+=1){
            cin>>a[i];
        }
        int median = ((n+1)/2);
        int jump = n-median;
        lli ans = 0;
        int idx = n*k-1-jump;
        //cout<<median<<" "<<jump<<" "<<idx<<endl;
        while(k--){
            //cout<<a[idx]<<" ";
            ans += (lli)a[idx];
            idx -= (jump+1);
        }
        //cout<<endl;
        cout<<ans<<endl;
    }
}