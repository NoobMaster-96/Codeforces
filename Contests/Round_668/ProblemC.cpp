#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>n>>k;
        string s;
        cin>>s;
        int o = 0;
        int z = 0;
        int q = 0;
        int i = 0;
        while(i<k){
            if(s[i]=='1'){
                o+=1;
            }
            else if(s[i]=='0'){
                z+=1;
            }
            else{
                q+=1;
            }
            i++;
        }
        bool check = true;
        if((o>z && o-q>z) ||(z>o && z-q>o)){
            cout<<"NO"<<endl;
            continue;
        }
        int req = k/2;
        int f0 = req-z;
        int f1 = req-o;
        while(i<n){
            char r = s[i];
            char l = s[i-k];
            i++;
            if((r=='1' and l=='0')||(r=='0' and l=='1')){
                check = false;
                break;
            }
            else if(r==l){
                continue;
            }
            else if(r=='?'){
                s[i-1] = l;
                continue;
            }
            if(r=='0'){
                f0-=1;
            }
            else{
                f1-=1;
            }
            if(f1<0 || f0<0){
                check = false;
                break;
            }
        }
        if(check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}