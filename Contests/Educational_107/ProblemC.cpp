#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n),t(q);
    vector<int> lidx(51,-1);
    for(int i=0;i<n;i+=1){
        cin>>a[i];
        if(lidx[a[i]]==-1){
            lidx[a[i]] = i+1;
        }
    }
    for(int i=0;i<q;i+=1){
        cin>>t[i];
    }
    for(int i=0;i<q;i+=1){
        cout<<lidx[t[i]]<<" ";
        for(int j=1;j<=50;j+=1){
            if(lidx[j]!= -1 && j!=t[i] && lidx[j]<lidx[t[i]]){
                lidx[j] += 1;
            }
        }
        lidx[t[i]] = 1;
    }
}