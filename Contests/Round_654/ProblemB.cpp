#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
    	int n,r;
        cin>>n>>r;
        lli ans;
        if(r>=n){
            ans = (lli)(n-1)*(lli)(n)/(lli)(2) + (lli)1;
        }
        else{
            ans = (lli)(r)*(lli)(r+1)/(lli)(2);
        }
        cout<<ans<<endl;
    }
}