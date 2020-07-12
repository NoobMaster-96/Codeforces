#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

vector<int> tree[100001];
vector<bool> vis(100001,false);

int helper(int node, int &cuts){
    vis[node] = true;
    int val = 0;
    for(auto nbr:tree[node]){
        if(!vis[nbr]){
            val += helper(nbr,cuts);
        }
    }
    if(val%2==1){
        cuts++;
        return 0;
    }
    return val+1;
}

int dfs(){
    int cuts = 0;
    int a = helper(1,cuts);
    return cuts;
}

int main(){
	int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    if(n%2==1){
        cout<<-1<<endl;
        return 0;
    }
    int ans = dfs();
    cout<<ans-1<<endl;
}