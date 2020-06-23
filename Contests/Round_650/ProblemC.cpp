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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i = 0;
        int ans = 0;
        while(i<n){
            while(i<n && s[i]=='1'){
                i += (k+1);
            }
            if(i<n){
                int j;
                if(i+k<n){
                    for(j=i;j<i+k+1;j++){
                        if(s[j]=='1'){
                            break;
                        }
                    }
                    if(j<i+k+1){
                        i=j;
                        continue;
                    }
                    else{
                        s[i] = '1';
                        ans++;
                    }
                }
                else{
                    for(j=i;j<n;j++){
                        if(s[j]=='1'){
                            break;
                        }
                    }
                    if(j<n){
                        i=n;
                    }
                    else{
                        s[i]='1';
                        i = n;
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}