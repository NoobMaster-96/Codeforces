#include<bits/stdc++.h>

using namespace std;

bool sortinrev(const pair<int,int> &a, const pair<int,int> &b){ 
	return (a.first > b.first); 
} 

int main(){
	int n;
	cin>>n;
	vector<pair<int, int>> data (n);
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		data[i].first=temp;
		data[i].second=i+1;
	}
	sort(data.begin(),data.end(),sortinrev);
	int x=0;
	int ans=0;
	for(int i=0;i<n;i++){
		ans += (data[i].first*x) + 1;
		x++;
	}
	cout<<ans<<endl;
	for(int i=0;i<n;i++){
		cout<<data[i].second<<" ";
	}
}