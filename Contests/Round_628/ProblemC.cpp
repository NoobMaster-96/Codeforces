#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ff first
#define ss second
#define loop(i,k,n) for(int i=k;i<n;++i)
#define mp make_pair
#define pb push_back

int dfsc(int u,vector<pair<int,int>> adj[],vector<bool> &vis,int n,vector<int> &v){
    vis[u]=1;
    int tot=1;
    for(auto it:adj[u]){
        if(!vis[it.first]){
            int x=dfsc(it.first,adj,vis,n,v);
            tot+=x;
            x*=(n-x);
            v[it.second]=x;
        }
    }
    return tot;
}
bool cmp(pair<int,int> &p1,pair<int,int> &p2){
    return p1.second<p2.second;
}
vector<int> dfs(vector<pair<int,int>> adj[],int n){
    vector<int> v(n-1);
    vector<bool> vis(n,0);
    dfsc(0,adj,vis,n,v);
    return v;
}

int32_t main(){
int n,x,y;
cin>>n;
vector<pair<int,int>> adj[n];
loop(i,0,n-1){
    cin>>x>>y;
    adj[x-1].pb(mp(y-1,i));
    adj[y-1].pb(mp(x-1,i));
}
vector<int> v;
v=dfs(adj,n);
pair<int,int> vx[n-1];
loop(i,0,n-1){
    vx[i]=mp(v[i],i);
}
sort(vx,vx+n-1);
loop(i,0,n-1){
    vx[i].ff=i;
}
sort(vx,vx+n-1,cmp);
for(auto xt:vx)
    cout<<xt.ff<<endl;        
    
}