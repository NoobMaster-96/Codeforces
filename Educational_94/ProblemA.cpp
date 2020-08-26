#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
        cin>>n;
        string s;
        cin>>s;
        string ans = "";
        for(int i=0;i<2*n-1;i+=2){
            ans += s[i];
        }
        cout<<ans<<endl;
    }
}