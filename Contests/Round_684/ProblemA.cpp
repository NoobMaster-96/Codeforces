#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n,c0,c1,h;
        string s;
        cin>>n>>c0>>c1>>h>>s;
        int cnt0 = 0;
        int cnt1 = 0;
        for(int i=0;i<n;i+=1){
            if(s[i]=='0'){
                cnt0+=1;
            }
            else{
                cnt1+=1;
            }
        }
        int ans = 0;
        if(c1+h<c0){
            ans += (h*cnt0 + n*c1);
        }
        else if(c0+h<c1){
            ans += (h*cnt1 + n*c0);
        }
        else{
            ans += (cnt1*c1 + cnt0*c0);
        }
        cout<<ans<<endl;
    }
}