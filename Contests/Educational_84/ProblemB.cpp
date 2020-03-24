#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<vector<int>> A(n);
		vector<int> taken(n+1,0);
		vector<int> daughter(n+1,0);
		int score = 0;
		for(int i=0;i<n;i++){
			int k;
			cin>>k;
			bool flag = 0;
			for(int j=0;j<k;j++){
				int temp;
				cin>>temp;
				A[i].push_back(temp);
				if(!flag){
					if(taken[A[i][j]] == 0){
						score++;
						taken[A[i][j]] = 1;
						flag = 1;
					}
				}
			}
			if(flag == 1){
				daughter[i+1] = 1;
			}
		}
		if(score == n){
			cout<<"OPTIMAL"<<endl;
		}
		else{
			int princess,prince;
			for(int i=1;i<=n;i++){
				if(daughter[i]==0){
					princess = i;
					break;
				}
			}
			for(int i=1;i<=n;i++){
				if(taken[i]==0){
					prince = i;
					break;
				}
			}
			cout<<"IMPROVE"<<endl<<princess<<" "<<prince<<endl;
		}
	}
}