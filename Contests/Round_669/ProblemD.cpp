#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

class graph{
    vector<int> *adjlist;
    int N;
    vector<bool> vis;
public:
    graph(int n){
        N = n;
        adjlist = new vector<int>[N];
        vector<bool> v(N,false);
        vis = v;
    }

    void addedge(int u, int v, bool bidir=true){
        adjlist[u].push_back(v);
        if(bidir){
            adjlist[v].push_back(u);
        }
    }

    pair<int,int> bfs(int node){
        vector<bool> vis(N,false);
        queue<int> q;
        q.push(node);
        vis[node] = true;
        vector<int> d(N,-1);
        d[node] = 0;
        int ans = node;
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            for(auto nbr:adjlist[temp]){
                if(!vis[nbr]){
                    d[nbr] = d[temp]+1;
                    q.push(nbr);
                    vis[nbr] = true;
                    ans = nbr;
                }
            }
        }
        return {ans,d[ans]};
    }

    int diameter(){
        pair<int,int> ans = bfs(1);
        ans = bfs(ans.first);
        return ans.second;
    }

    int dist(int a,int b){
        if(a==b){
            return 0;
        }
        vis[a] = true;
        for(auto nbr:adjlist[a]){
            if(!vis[nbr]){
                int ans = dist(nbr,b);
                if(ans!=-1){
                    return ans+1;
                }
            }
        }
        return -1;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,da,db;
        cin>>n>>a>>b>>da>>db;
        graph g(n+1);
        for(int i=1;i<n;i+=1){
            int u,v;
            cin>>u>>v;
            g.addedge(u,v);
        }
        if(da>=db){
            cout<<"Alice"<<endl;
            continue;
        }
        int d = g.dist(a,b);
        if(d<=da){
            cout<<"Alice"<<endl;
            continue;
        }
        if(db<=2*da){
            cout<<"Alice"<<endl;
            continue;
        }
        d = g.diameter();
        if(da>=(d+1)/2){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
}
