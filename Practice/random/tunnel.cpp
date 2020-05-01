#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int > start(n,0);
	vector<int > end(n,0);
	for(int i=0;i<n;i++){
		cin>>end[i];
	}
	for(int i=0;i<n;i++){
		cin>>start[i];
	}
	vector<int > idx(n+1,-1);
	for(int i=0;i<n;i++){
		idx[start[i]]=i+1;
	}

	/*for(int i=0;i<=n;i++)
		cout<<idx[i];*/
	int count=0;
	for(int i=0;i<n;i++){
		if(i+1>=idx[end[i]]){
			count++;
		}
	}
	if(count==n)
		count=0;
	cout<<count<<endl;
}