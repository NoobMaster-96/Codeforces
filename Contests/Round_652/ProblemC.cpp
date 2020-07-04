#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int
 
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n),w(k);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<k;i++){
            cin>>w[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        sort(w.begin(),w.end());
        vector<int> b[k];
        int idx = 0;
        for(int i=0;i<k;i++){
            b[idx].push_back(a[i]);
            idx++;
        }
        int i = n-1;
        for(idx=k-1;idx>=0;idx--){
            while(b[idx].size()<w[idx]){
                b[idx].push_back(a[i]);
                i--;
            }
        }
        lli ans = 0;
        for(int i=0;i<k;i++){
            sort(b[i].begin(),b[i].end());
            ans += (lli)b[i][0];
            ans += (lli)b[i][b[i].size()-1];
        }
        cout<<ans<<endl;
    }
}