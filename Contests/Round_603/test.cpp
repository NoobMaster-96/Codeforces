#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		vector<int> candy(3);
		long long int ans=0;
		for(int j=0;j<3;j++){
			cin>>candy[j];
		}
		sort(candy.begin(),candy.end());
		while((candy[0]!=0 && candy[1]!=0) || (candy[1]!=0 && candy[2]!=0) || (candy[2]!=0 && candy[0]!=0)){
			if(candy[0]==0){
				candy[1]--;
				candy[2]--;
				ans++;
			}
			else{
				candy[0]--;
				candy[2]--;
				ans++;
			}
			sort(candy.begin(),candy.end());
		}
		cout<<ans<<endl;
	}
	return 0;
}