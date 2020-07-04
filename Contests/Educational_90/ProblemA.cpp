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
    	lli a,b,c;
        cin>>a>>b>>c;
        lli mini,maxi;
        if(a*b>c){
            maxi = b;
        }
        else{
            maxi = -1;
        }
        if(a<c){
            mini = 1;
        }
        else{
            mini = -1;
        }
        cout<<mini<<" "<<maxi<<endl;
    }
}