#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long long int x,y;
		cin>>x>>y;
		if(x%2==0){
			if(x==2){
				if(y<=3){
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
			else{
				cout<<"YES"<<endl;
			}
		}
		else{
			if(x==1){
				if(y==1){
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
			else if(x==3){
				if(y<=3){
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
			else{
				cout<<"YES"<<endl;
			}
		}
	}
	return 0;
}