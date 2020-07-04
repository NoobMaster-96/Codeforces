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
        string s;
        cin>>s;
        int n = s.length();
        int cnt = 0;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            if(s[i]=='+'){
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt<0){
                v.push_back({cnt,i});
            }
        }
        lli ans = 0;
        map<int,bool> vis;
        for(int i=0;i<v.size();i++){
            if(vis[v[i].first]==0){
                ans += (lli)(v[i].second+1);
                vis[v[i].first] = 1;
            }
        }
        ans += (lli)n;
        cout<<ans<<endl;
    }
}