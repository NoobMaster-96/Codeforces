#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		double d;
		cin>>n>>d;
		if(n >= d){
			cout<<"YES"<<endl;
			continue;
		}
		else{
			double day = n-1;
			int total = day + ceil(d/day+1);
			bool flag = false;
			for(;day>=1;day--){
				int temp = day+ ceil(d/(day+1));
				if(temp <= n){
					cout<<"YES"<<endl;
					flag = true;
				}
				if(flag == true){
					break;
				}
				if(temp <= total){
					total = temp;
				}
				else{
					break;
				}

			}
			if(flag == true){
				continue;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}