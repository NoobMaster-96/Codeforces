#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n = str.length();
        string ans = "";
        int r=0,s=0,p=0;
        for(int i=0;i<n;i++){
            if(str[i]=='R'){
                r++;
            }
            else if(str[i]=='P'){
                p++;
            }
            else{
                s++;
            }
        }
        if(r>=p && r>=s){
            for(int i=0;i<n;i++){
                ans += 'P';
            }
        }
        else if(p>=r && p>=s){
            for(int i=0;i<n;i++){
                ans += 'S';
            }
        }
        else{
            for(int i=0;i<n;i++){
                ans += 'R';
            }
        }
        cout<<ans<<endl;
    }
}