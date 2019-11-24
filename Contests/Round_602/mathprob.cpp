#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector<pair<long long int,long long int>> points(n);
		for(int j=0;j<n;j++){
			long long int temp1, temp2;
			cin>>temp1>>temp2;
			points[j] = make_pair(temp1,temp2);

		}
		long long int l = 1e9 + 7,r = 0;
		for(int j=0;j<n;j++){
			if(points[j].first>r){
				r = points[j].first;
			}
			if(points[j].second<l){
				l = points[j].second;
			}
		}
		if(r-l<=0){
			cout<<0<<endl;
		}
		else{
			cout<<r-l<<endl;
		}
	}
	return 0;
}