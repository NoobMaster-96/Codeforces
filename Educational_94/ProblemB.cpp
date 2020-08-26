#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
        int p,f,cnts,cntw,s,w;
        cin>>p>>f>>cnts>>cntw>>s>>w;
        if(s>w){
            swap(cntw,cnts);
            swap(s,w);
        }
        int ans = 0;
        for(int i=0;i<cnts+1;i++){
            int cnt=0;
            int ps = min(p,i*s)/s ;
            cnt+=ps;
            int fs = min(f,(cnts-ps)*s)/s;
            cnt+= fs;
            int pw = min(p-(ps*s),(cntw)*w)/w;
            cnt+= pw;
            int fw = min(f-(fs*s),(cntw-pw)*w)/w;
            cnt+= fw;
            ans=max(cnt,ans);
    }
    cout<<ans<<endl;          
    }
}