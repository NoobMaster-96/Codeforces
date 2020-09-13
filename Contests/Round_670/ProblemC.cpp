#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

class graph{
    vector<int> *adjlist;
    vector<int> parent;
    vector<int> childcount;
    vector<int> c;
    int num;
    int N;
public:
    graph(int n){
        N = n;
        adjlist = new vector<int>[N];
        parent = vector<int>(N);
        childcount = vector<int>(N);
        num = n;
    }

    void addedge(int u, int v, bool bidir=true){
        adjlist[u].push_back(v);
        if(bidir){
            adjlist[v].push_back(u);
        }
    }

    int dfs(int node, int pnode){
        parent[node] = pnode;
        int children = 1;
        for(int nbr:adjlist[node]){
            if(nbr!=pnode){
                children += dfs(nbr,node);
            }
        }
        childcount[node] = children;
        int val = 0;
        for(int nbr:adjlist[node]){
            val = max(val,childcount[nbr]);
        }
        val = max(val,N-1-childcount[node]);
        if(val<num){
            c.clear();
            c.push_back(node);
        }
        else{
            if(val==num){
                c.push_back(node);
            }
        }
        num = min(num,val);
        return children;
    }

    void ans(){
        if(c.size()==1){
            int temp = adjlist[c[0]][0];
            cout<<c[0]<<" "<<temp<<endl;
            cout<<c[0]<<" "<<temp<<endl;
            return;
        }
        else{
            int node = -1;
            int maxi = 0;
            for(int nbr:adjlist[c[0]]){
                if(childcount[nbr]>maxi){
                    node = nbr;
                    maxi = childcount[nbr];
                }
            }
            if(parent[c[0]]!=-1){
                if(childcount[parent[c[0]]]-childcount[c[0]]>maxi){
                    node = parent[c[0]];
                }
            }
            int newNode = -1;
            maxi = 0;
            for(int nbr:adjlist[node]){
                if(nbr!=c[0] and childcount[nbr]>maxi){
                    maxi = childcount[nbr];
                    newNode = nbr;
                }
            }   
            cout<<node<<" "<<newNode<<endl;
            cout<<c[0]<<" "<<newNode<<endl;
        }
    }
    
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        graph g(n+1);
        for(int i=1;i<n;i+=1){
            int u,v;
            cin>>u>>v;
            g.addedge(u,v);
        }
        g.dfs(1,-1);
        g.ans();
    }
}