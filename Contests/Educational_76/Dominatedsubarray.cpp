#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; i++){
		int n;
		cin>>n;
		vector<int> a(n,0);
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		int min = n;
		for(int j=2;j<=n;j++){
			for(int k=0;k<=n-j;k++){
				vector<int> temp(j,0);
				for{int l=0;l<j;l++}{
					temp[l]=a[k+l];
				}
				sort(temp.begin(),temp.end());
				
			}
		}
	}
}