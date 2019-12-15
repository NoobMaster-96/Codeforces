#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int s1,s2;
	cin>>s1>>s2;
	int gs1=0,ss1=0,gs2=0,ss2=0;
	for(int i=0;i<n;i++){
		int x1,x2;
		cin>>x1>>x2;
		if(x1>s1){
			gs1++;
		}
		else if(x1<s1){
			ss1++;
		}
		if(x2>s2){
			gs2++;
		}
		else if(x2<s2){
			ss2++;
		}
	}
	if(gs1>=ss1 && gs1>=gs2 && gs1>=ss2){
		cout<<gs1<<endl;
		cout<<s1+1<<" "<<s2;
	}
	else if(ss1>=gs1 && ss1>=gs2 && ss1>=ss2){
		cout<<ss1<<endl;
		cout<<s1-1<<" "<<s2;
	}
	else if(gs2>=ss1 && gs2>=gs1 && gs2>=ss2){
		cout<<gs2<<endl;
		cout<<s1<<" "<<s2+1;
	}
	else if(ss2>=ss1 && ss2>=gs2 && ss2>=gs1){
		cout<<ss2<<endl;
		cout<<s1<<" "<<s2-1;
	}
	return 0;
}