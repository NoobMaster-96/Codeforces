#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n,m;
        cin>>n>>m;
        int diff = abs(n-m);
        cout<<(int)ceil(diff/10.0)<<endl;
    }
}