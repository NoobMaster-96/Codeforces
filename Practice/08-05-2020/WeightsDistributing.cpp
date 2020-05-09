#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

template<typename T>
class graph{
	map<T,list<T>> adjlist;

public:
	graph(){}

	void addedge(T u, T v, bool bidir=true){
		adjlist[u].push_back(v);
		if(bidir){
			adjlist[v].push_back(u);
		}
	}

	void print(){
		for(auto i:adjlist){
			cout<<i.first<<"->";
			for(T entry:i.second){
				cout<<entry<<" ";
			}
			cout<<endl;
		}
	}

	void bfs(T src, vector<int> &d){
		d[src] = 0;
		queue<T> q;
		q.push(src);
		while(!q.empty()){
			T temp = q.front();
			q.pop();
			for(auto i:adjlist[temp]){
				if(d[i]==-1){
					d[i] = d[temp] + 1;
					q.push(i);	
				}
			}
		}
	}
};

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,a,b,c;
		cin>>n>>m>>a>>b>>c;
		vector<int> p(m);
		graph<int> g;
		for(int i=0;i<m;i++){
			cin>>p[i];
		}
		sort(p.begin(),p.end());
		for(int i=0;i<m;i++){
			int v,u;
			cin>>v>>u;
			g.addedge(v,u);
		}
		vector<int> da(n+1,-1),db(n+1,-1),dc(n+1,-1);
		g.bfs(a,da);
		g.bfs(b,db);
		g.bfs(c,dc);
		vector<lli> pref(m+1);
		for(int i=0;i<m;i++){
			pref[i+1] = pref[i] + p[i];
		}
		lli ans = 1e18;
		for(int i=1;i<=n;i++){
			if(da[i]+db[i]+dc[i]>m){
				continue;
			}
			ans = min(ans,pref[db[i]]+pref[da[i]+db[i]+dc[i]]);
		}
		cout<<ans<<endl;
	}
}