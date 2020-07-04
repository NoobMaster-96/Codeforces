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
        lli a,b,n,m;
        cin>>a>>b>>n>>m;
        if(a+b >= n+m && min(a,b)>=m){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}