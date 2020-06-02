#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
    	int n,x;
    	cin>>n>>x;
    	vector<int> a(n);
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    	}
    	int o = 0, e = 0;
    	for(int i=0;i<n;i++){
    		if(a[i]%2==0){
    			e++;
    		}
    		else{
    			o++;
    		}
    	}
    	if(o==0){
    		cout<<"NO"<<endl;
    		continue;
    	}
    	o--;
    	x--;
    	int z = 2*(x/2);
    	int b = x-z;
    	z -= 2*(o/2);
    	if(z<0){
    		z=0;
    	}
    	x = z+b;
    	if(x<=e){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    }
}