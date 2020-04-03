#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	if(a==0 && b==0){
		cout<<"OUT"<<endl;
	}
	else if(a==27 && b==0){
		cout<<"IN"<<endl;
	}
	else if(a==0 && b==27){
		cout<<"OUT"<<endl;
	}
	else if(a==27 && b==27){
		cout<<"IN"<<endl;
	}
	return 0;
}