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
    	int n,m;
    	cin>>n>>m;
    	int grid[n][m];
    	for(int i=0;i<n;i++){
    		for(int j=0;j<m;j++){
    			cin>>grid[i][j];
    		}
    	}
    	if(n==1 && m==1){
    		if(grid[0][0]){
    			cout<<"Vivek"<<endl;
    		}
        	else{
        		cout<<"Ashish"<<endl;
        	}
        	continue;
    	}
    	set<int> row;
    	set<int> col;
    	for(int i=0;i<n;i++){
        	for(int j=0;j<m;j++){
            	if(grid[i][j]==1){
                	row.insert(i);
                	col.insert(j);
            	}
        	}
    	}
    	int num = min(n-row.size(),m-col.size());
    	if(num%2==0){
    		cout<<"Vivek"<<endl;
    	}
    	else{
    		cout<<"Ashish"<<endl;
    	}
    }
}