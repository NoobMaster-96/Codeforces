#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        int f1idx = 0;
        int l1idx = n+1;
        int f0idx = 0;
        int l0idx = n+1;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(f0idx==0){
                    f0idx = i+1;
                }
                if(l0idx==n+1){
                    l0idx = i+1;
                }
                f0idx = min(f0idx,i+1);
                l0idx = max(l0idx,i+1);
            }
            else{
                if(f1idx==0){
                    f1idx = i+1;
                }
                if(l1idx==n+1){
                    l1idx = i+1;
                }
                f1idx = min(f1idx,i+1);
                l1idx = max(l1idx,i+1);
            }
        }
        int l,r;
        for(int i=0;i<q;i++){
            cin>>l>>r;
            if(s[r-1]=='0' && l0idx>r && l0idx!=n+1){
                cout<<"Yes"<<endl;
            }
            else if(s[r-1]=='1' && l1idx>r && l1idx!=n+1){
                cout<<"Yes"<<endl;
            }
            else if(s[l-1]=='0' && f0idx<l && f0idx!=0){
                cout<<"Yes"<<endl;
            }
            else if(s[l-1]=='1' && f1idx<l && f1idx!=0){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}