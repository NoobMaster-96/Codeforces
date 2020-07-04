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
    	string s;
        cin>>s;
        int i = 0,j=n-1;
        for(;i<n;i++){
            if(s[i]=='1'){
                break;
            }
        }
        for(;j>=0;j--){
            if(s[j]=='0'){
                break;
            }
        }
        if(i<j){
            cout<<s.substr(0,i)<<s.substr(j)<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}