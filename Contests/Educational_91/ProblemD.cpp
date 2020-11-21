#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	t=1;
	while(t--){
		int n,m,x,k,y;
        cin>>n>>m>>x>>k>>y;
        vector<int> a(n),b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        if(n==m){
            if(a==b){
                cout<<0;
            }
            else{
                cout<<-1;
            }
            return 0;
        }
        
	}
}