#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		long long int a;
    	cin>>a;
    	if(a<15){
    		cout<<"NO"<<endl;
    		continue;
    	}
    	long long int b = a%14;
    	if(b>=15 && b<=20){
    		cout<<"YES"<<endl;
    		continue;
    	}
    	b += 14;
    	if(b>=15 && b<=20){
    		cout<<"YES"<<endl;
    		continue;
    	}
    	cout<<"NO"<<endl;
	}
	return 0;
}