#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	map<int,int> A;
	for(int i=0;i<n;i++){
		cin>>a[i];
		A[a[i]]++;
	}
	vector<int> ans;
	int i=32;
	while(i>=0){
		int c = 0;
		int j=0;
		while(j<n){
			if((a[j] & (1<<i)) && A.count(a[j])){
				c++;
			}
			j++;
		}
		if(c==1){
			for(int k=0;k<n;k++){
				if((a[k] & (1<<i))&&(A.count(a[k]))){
					ans.push_back(a[k]);
					A[a[k]]--;
					if(A[a[k]]==0){
						A.erase(a[k]);
					}
					break;
				}
			}
		}
		i--;
	}
	for(auto i:A){
		for(int j=0;j<i.second;j++){
			ans.push_back(i.first);
		}
	}
	for(auto i:ans){
		cout<<i<<" ";
	}
	return 0;
}