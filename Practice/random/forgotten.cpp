#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	if(a==b){
		int a_ = a*10+1;
		int b_ = b*10+2;
		cout<<a_<<" "<<b_;
	}
	else if(b-a==1){
		int a_ = a*10+9;
		int b_ = b*10;
		cout<<a_<<" "<<b_;
	}
	else if(a==9 && b==1){
		int b_ = b*10;
		cout<<a<<" "<<b_;
	}
	else{
		cout<<"-1";
	}

	return 0;
}