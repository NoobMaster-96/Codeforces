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
		if(candy[0]==candy[1] && candy[1]==candy[2]){
			ans = (candy[0]+candy[1]+candy[2])/2;
		}
		else if(candy[1]==candy[2]){
			int a = candy[0]/2;
			ans = 2*a + candy[1]-a;
		}
		else{
			if(candy[0]+candy[1]<=candy[2]){
				ans = candy[0]+candy[1];
			}
			else{
				ans = (candy[0]+candy[1]+candy[2])/2;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}