#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
    	int r,b,d;
        cin>>r>>b>>d;
        double n = min(r,b);
        double diff = (r+b-(2*n))/n;
        if(diff<=(double)d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}