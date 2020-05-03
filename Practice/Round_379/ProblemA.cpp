#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 

int main(){
	int n;
	string s;
	cin>>n>>s;
	int cntA=0,cntD=0;
	for(int i=0;i<n;i++){
		if(s[i]=='A'){
			cntA++;
		}
		else{
			cntD++;
		}
	}
	if(cntD==cntA){
		cout<<"Friendship"<<endl;
	}
	else if(cntA<cntD){
		cout<<"Danik"<<endl;
	}
	else{
		cout<<"Anton"<<endl;
	}
}