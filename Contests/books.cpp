#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0);
  	cout.tie(0);
    int t;
    cin >> t;
    while (t--){
    	int n;
    	cin>>n;
    	vector<int> p(n+1);
    	for(int i=1;i<n+1;i++)
    	cin>>p[i];
    	vector<int> ans(n+1,1);
    	map<int,int> m;
    	for(int i=1;i<n+1;i++){
    		m[i] = p[i];
    	}
    	while(!m.empty()){
    		int i = (*m.begin()).first;
    		int start = i;
    		int end = m[i];
    		vector<int> a;
    		a.push_back(i);
    		while(i!=end){
    			a.push_back(end);
    			start = end;
    			end = m[start];
    		}
    		for(int j : a){
    			ans[j] = a.size();
    			m.erase(j);
    		}
    	}
    	for(int i=1;i<n+1;i++){
    		cout<<ans[i]<<" ";
    	}
    	cout<<endl;
    }
}