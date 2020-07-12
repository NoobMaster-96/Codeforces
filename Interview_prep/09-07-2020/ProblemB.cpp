#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,c,p;
        cin>>s>>c>>p;
        map<char,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end()){
                if(c[i]-'0'<mp[s[i]]){
                    mp[s[i]] = c[i]-'0';
                }
            }
            else{
                mp[s[i]] = c[i]-'0';
            }
        }
        int cost = 0;
        bool flag = true;
        for(int i=0;i<m;i++){
            if(mp.find(p[i])==mp.end()){
                flag = false;
            }
            else{
                cost += mp[p[i]];
            }
        }
        if(flag){
            cout<<cost<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}