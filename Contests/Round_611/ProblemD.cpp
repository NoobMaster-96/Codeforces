#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,h;
	cin>>t>>h;
	vector<int> trees(t);
	set<int> tree;
	for(int i=0;i<t;i++){
		cin>>trees[i];
		tree.insert(trees[i]);
	}
	sort(trees.begin(),trees.end());
	set<int> humans;
	int ans = 0;
	int dist = 1;
	while(humans.size()<h){
		for(int i=0;i<t;i++){
			if(humans.find(trees[i]-dist) == humans.end()){
				if(tree.find(trees[i]-dist) == tree.end()){
					humans.insert(trees[i]-dist);
					ans += dist;
				}
			}
			if(humans.size()==h){
				break;
			}
			if(humans.find(trees[i]+dist) == humans.end()){
				if(tree.find(trees[i]+dist) == tree.end()){
					humans.insert(trees[i]+dist);
					ans += dist;
				}
			}
			if(humans.size()==h){
				break;
			}
		}
		dist++;
	}
	cout<<ans<<endl;
	set<int> :: iterator itr;
	for(itr = humans.begin(); itr!= humans.end(); ++itr){
		cout<<*itr<<" ";
	}
}