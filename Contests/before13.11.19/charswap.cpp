#include<bits/stdc++.h>
using namespace std;

void IsSwapable(string S, string T, int n){
	int difference = 0;
	vector<char> a(2);
	vector<char> b(2);
	for(int i=0;i<n;i++){
		if(S[i]!=T[i]){
			difference++;
			if(difference==1){
				a[0]=S[i];
				a[1]=T[i];
			}
			if(difference==2){
				b[0]=S[i];
				b[1]=T[i];
			}
		}
		if(difference>2){
			cout<<"NO"<<endl;
			return;
		}
	}
	if(difference==2){
		if(a[0]==b[0] && a[1]==b[1]){
			cout<<"YES"<<endl;
			return;
		}
		else{
			cout<<"NO"<<endl;
			return;
		}
	}
	else{
		cout<<"NO"<<endl;
		return;
	}
}

int main(){

	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		int n;
		cin>>n;
		string S,T;
		cin>>S>>T;
		IsSwapable(S,T,n);
	}
	return 0;
}