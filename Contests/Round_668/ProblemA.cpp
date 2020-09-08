#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	vector<int> a(n);
    	for(int i =n-1;i>=0;i-=1){
    		cin>>a[i];
    	}
    	for(int i=0;i<n;i++){
    		cout<<a[i]<<" ";
    	}
    	cout<<endl;
    }
}