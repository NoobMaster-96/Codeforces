#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n, m;
	cin>>n>>m;
	vector<int> A(n);
	vector<int> B(n);
	long long int sumA = 0, sumB = 0;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	for(int i=0;i<n;i++){
		cin>>B[i];
		if(B[i]==0){
			B[i] = m;
		}
	}
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	vector<int> diff(n);
	int idx = 0;
	while(true){
		for(int i=0;i<n;i++){
			int id = (i + idx)%n;
			diff[i] = B[id] - A[i];
			if(diff[i]==m){
				diff[i] = 0;
			}
			if(diff[i]<0){
				diff[i] += m;
			}
		}
		sort(diff.begin(),diff.end());
		if(diff[0]==diff[n-1]){
			break;
		}
		else{
			idx++;
		}
	}
	cout<<diff[0]<<endl;

	return 0;
}