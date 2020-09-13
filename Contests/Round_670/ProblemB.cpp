#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<lli> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==5){
            cout<<a[0]*a[1]*a[2]*a[3]*a[4]<<endl;
            continue;
        }
        vector<lli> p,np;
        for(int i=0;i<n;i++){
            if(a[i]>=0){
                p.push_back(a[i]);
            }
            else{
                np.push_back(a[i]);
            }
        }
        sort(p.begin(),p.end(),greater<lli>());
        sort(np.begin(),np.end());
        if(p.size()==0){
            lli ans = 1;
            for(int i=0;i<5;i++){
                ans *= np[i];
            }
            cout<<ans<<endl;
            continue;
        }
        else if(np.size()==0){
            lli ans = 1;
            for(int i=0;i<5;i++){
                ans *= p[i];
            }
            cout<<ans<<endl;
            continue;
        }
        int i = 2;
        vector<lli> pm;
        pm.push_back(p[0]);
        lli temp = p[0];
        for(;i<min((int)p.size(),5);i+=2){
            temp *= (p[i-1]*p[i]);
            pm.push_back(temp);
        }
        i = 1;
        vector<lli> npm;
        temp = (lli)1;
        npm.push_back(temp);
        for(;i<min((int)np.size(),4);i+=2){
            temp *= (np[i-1]*np[i]);
            npm.push_back(temp);
        }
        int len1 = pm.size();
        int len2 = npm.size();
        vector<lli> ans;
        if(len1==3){
            ans.push_back(pm[2]*npm[0]);
        }
        if(len2==3){
            ans.push_back(pm[0]*npm[2]);
        }
        if(len1>=2 && len2>=2){
            ans.push_back(pm[1]*npm[1]);
        }
        sort(ans.begin(),ans.end(),greater<lli>());
        cout<<ans[0]<<endl;
    }
}