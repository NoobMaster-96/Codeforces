#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <functional>
using namespace __gnu_pbds; 
using namespace std;
#define endl "\n"
#define lli long long int 

int main(){
	int n,q;
	cin>>n>>q;
	int temp;
	new_data_set p;
	for(int i=0;i<n;i++){
		cin>>temp;
		p.insert(temp);
	}
	while(q--){
		cin>>temp;
		if(temp>0){
			p.insert(temp);
		}
	}
}