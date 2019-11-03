#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,a,b,c;
		cin>>n>>a>>b>>c;
		string bob;
		cin>>bob;
		string Alice;
		int a_ = a,b_= b,c_ = c;
		int wins_ = 0;
		for(int j=0;j<n;j++){
			if(bob[j]=='R'){
				Alice.push_back('P');
			}
			else if(bob[j]=='P'){
				Alice.push_back('S');
			}
			else{
				Alice.push_back('R');
			}
		}
		for(int j=0;j<n;j++){
			if(Alice[j]=='R'){
				if(a_ !=0){
					a_--;
					//cout<<a_;
				}
				else{
					Alice[j]='A';
					wins_++;
				}
			}
			else if(Alice[j]=='P'){
				if(b_ != 0){
					b_--;
					//cout<<b_;
				}
				else{
					Alice[j]='A';
					wins_++;
				}
			}
			else if(Alice[j]=='S'){
				if(c_ != 0){
					c_--;
					//cout<<c_;
				}
				else{
					Alice[j]='A';
					wins_++;
				}
			}
		}
		int wins = n - wins_;
		int win;
		if(n%2==0)
			win=n/2;
		else
			win=(n+1)/2;

		if(wins>=win){
			for(int j=0;j<n;j++){
				if(Alice[j]=='A'){
					if(a_ != 0){
						Alice[j]='R';
						a_--;
					}
					else if(b_!=0){
						Alice[j]='P';
						b_--;
					}
					else if(c_!=0){
						Alice[j]='S';
						c_--;
					}
				}
			}
			cout<<"YES"<<endl<<Alice<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		//cout<<Alice<<endl;
	}
}