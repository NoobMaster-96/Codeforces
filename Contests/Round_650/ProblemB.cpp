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
    	int n;
    	cin>>n;
    	vector<int> a(n);
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    	}
    	int op = 0, ep = 0;
        for(int i=0;i<n;i++){
            if(i%2==0 && a[i]%2!=0){
                op++;
            }
            else if(i%2==1 && a[i]%2!=1){
                ep++;
            }
        }
        if(op==ep){
            cout<<op<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}