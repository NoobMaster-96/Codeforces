#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

vector<int> *adjlist;
vector<int> p,h;

void count(int node, vector<bool> &vis, vector<int> &a){
	vis[node] = true;
	for(auto nbr:adjlist[node]){
		if(!vis[nbr]){
			count(nbr,vis,a);
			a[node] += a[nbr];
		}
	}
	a[node] += p[node]; 
}

bool helper(int node, vector<bool> &vis, vector<int> &a, vector<int> &g){
	vis[node] = true;
	int gcurr = 0;
	for(auto nbr:adjlist[node]){
		if(!vis[nbr]){
			bool check = helper(nbr,vis,a,g);
			if(!check){
				return false;
			}
			gcurr += g[nbr];
		}
	}
	g[node] = (a[node]+h[node])/2;
	if((a[node]+h[node])%2==0){}
	else{
		return false;
	}
	if(g[node]>=0 && g[node]<=a[node]){}
	else{
		return false;
	}
	if(g[node]>=gcurr){}
	else{
		return false;
	}
	return true;
}

void dfs(int n){
	vector<bool> vis(n+1,false);
	vector<int> a(n+1,0),g(n+1,0);
	count(1,vis,a);
	for(int i=1;i<=n;i++){
		vis[i] = false;
	}
	bool ans = helper(1,vis,a,g);
	if(ans){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        adjlist = new vector<int>[n+1];
        p.clear();
        h.clear();
        p.push_back(0);
        h.push_back(0);
        for(int i=0;i<n;i++){
        	int a;
        	cin>>a;
        	p.push_back(a);
        }
        for(int i=0;i<n;i++){
        	int a;
        	cin>>a;
        	h.push_back(a);
        }
        for(int i=1;i<n;i++){
        	int x,y;
        	cin>>x>>y;
        	adjlist[x].push_back(y);
        	adjlist[y].push_back(x);
        }
        dfs(n);
    }
}