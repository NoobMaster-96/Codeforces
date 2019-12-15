#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		vector<long long int> data(3);
		for(int j=0;j<3;j++){
			cin>>data[j];
		}
		sort(data.begin(),data.end());
		if(data[0]==data[1] && data[1]==data[2]){
			cout<<0<<endl;
		}
		else if(data[0]==data[1] && data[1]!=data[2]){
			if(data[0]+1==data[2]){
				cout<<0<<endl;
			}
			else{
				long long int ans = 2*(data[2]-1 -(data[0]+1));
				cout<<ans<<endl;
			}
		}
		else if(data[1]==data[2] && data[1]!=data[0]){
			if(data[0]+1 == data[1]){
				cout<<0<<endl;
			}
			else{
				long long int ans = 2*(data[2]-1 -(data[0]+1));
				cout<<ans<<endl;
			}
		}
		else{
			if(data[0]+1==data[1] && data[1]+1==data[2]){
				cout<<0<<endl;
			}
			else{
				long long int ans = 2*(data[2]-1 -(data[0]+1));
				cout<<ans<<endl;
			}
		}
	}
	return 0;
}