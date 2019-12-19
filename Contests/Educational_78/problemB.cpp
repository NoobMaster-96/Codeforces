#include<bits/stdc++.h>
using namespace std;

int main(){
	 int t;
    cin >> t;
    while (t--){
    	int a,b;
    	cin>>a>>b;
    	if(a==b){
    		cout<<0<<endl;
    		continue;
    	}
    	if(abs(a-b)==1){
    		cout<<1<<endl;
    		continue;
    	}
    	int val = 1;
    	while(true){
    		int ans = a + b + (val*val+val)/2 + ;
    		if(ans%2==0 && ans/2>=a && ans/2>=b){
    			break;
    		}else{
    			val += 1;
    		}
    	}
    	cout<<val<<endl;

    }
}
