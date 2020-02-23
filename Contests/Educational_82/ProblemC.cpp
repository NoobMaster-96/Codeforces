#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int> adjlist[], int s, int d){
	adjlist[s].push_back(d);
	adjlist[d].push_back(s);
}

bool icc(vector<int> adjlist[],int s,vector<bool>& visited){
	vector<int> parent(26, -1);
	queue<int> q;
	visited[s] = true;
	q.push(s);
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(auto v : adjlist[u]){
			if(!visited[v]){
				visited[v] = true;
				q.push(v);
				parent[v] = u;
			}
			else if(parent[u] != v){
				return true;
			}
		}
	}
	return false;
}

bool iscycle(vector<int> adjlist[]){
	vector<bool> visited(26,false);
	for(int i=0;i<26;i++){
		if(!visited[i] && icc(adjlist,i,visited)){
			return true;
		}
	}
	return false;
}

string dfshelper(vector<int> adjlist[], vector<bool> &visited, int source){
	visited[source] = true;
	string s;
	for(int next:adjlist[source]){
		if(!visited[next]){
			s += dfshelper(adjlist,visited,next);
		}
	}
	s += source + 'a';
	return s;
}

string dfs(vector<int> adjlist[]){
	vector<bool> visited(26,false);
	int i=0;
	for(;i<26;i++){
		if(adjlist[i].size() == 0){
			break;
		}
	}
	string str = dfshelper(adjlist,visited,i);
	//for(int i=0;i<26;i++){
		//if(!visited[i]){
		//	str += i + 'a';
		//}
	//}
	return str;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		vector<int> adjlist[26];
		string s;
		cin>>s;
		int len = s.length();
		for(int i=0;i<len-1;i++){
			int a = s[i]-97;
			int b = s[i+1]-97;
			addedge(adjlist,a,b);
		}
		for(int i=0;i<26;i++){
			sort(adjlist[i].begin(),adjlist[i].end());
			vector<int>::iterator ip;
			ip = unique(adjlist[i].begin(),adjlist[i].end());
			adjlist[i].resize(distance(adjlist[i].begin(),ip));
		}
		bool flag = true;
		for(int i=0;i<26;i++){
			if(adjlist[i].size()>2){
				flag = false;
				break;
			}
		}
		if(flag == false){
			cout<<"NO"<<endl;
			continue;
		}
		if(iscycle(adjlist)){
			cout<<"NO"<<endl;
			continue;
		}
		string ans = dfs(adjlist);
		cout<<"YES"<<endl<<ans<<endl;
	}
	return 0;
}