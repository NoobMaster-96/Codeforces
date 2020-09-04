#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int n,q;
    cin>>n>>q;
    map<int,set<int>> w,m;
    set<int> ws,ms;
    vector<int> ans(n+1,-1),ans_(n+1,-1);
    for(int i=1;i<=n;i++){
        ws.insert(i);
        ms.insert(i);
    }
    map<int,int> nt;
    for(int i=0;i<q;i++){
        char ch;
        int x,y;
        cin>>ch>>x>>y;
        if(ch=='='){
            ans[x] = y;
            ans_[y] = x;
            ws.erase(x);
            ms.erase(y);
        }
        else{
            nt[x] = y;
        }
    }
    for(int i=1;i<=n;i++){
        if(ans[i]==-1){
            w[i] = ms;
        }
        if(ans_[i]==-1){
            m[i] = ws;
        }
    }
    for(auto x:nt){
        w[x.first].erase(x.second);
        m[x.second].erase(x.first);
    }
    vector<int> sz(n+1,0);
    for(int i=1;i<=n;i++){
        if(ans[i]!=-1){
            sz[i] = 1;
        }
        else{
            sz[i] = w[i].size();
        }
    }
    while(true){
        bool change = false;
        int s = INT_MAX;
        int idx = -1;
        for(int i=1;i<=n;i++){
            if(ans[i]==-1){
                change = true;
                if(w[i].size()<s){
                    s = w[i].size();
                    idx = i;
                }
            }
        }
        int val = *(w[idx].begin());
        ans[idx] = val;
        for(auto x:m[val]){
            w[x].erase(val);
        }
        m.erase(val);
        if(!change){
            break;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
}