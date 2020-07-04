#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

lli n,p;

bool func(vector<lli> a,lli l){
    lli i=0,ctr=0,j,k;
    bool f=0;
    for(k=0;k<n;k+=1){
        for(j=i;j<n;j+=1){
            if(a[j]<=l){
                ctr+=1;
            }
            else{
                break;
            }
        }
        i=j;
        if(ctr==0){
            break;
        }
        l +=1;
        if(ctr%p==0){
            f=1;
            break;
        }
        ctr-=1;
    }
    if(k<n || f) return 0;
    return 1;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	cin>>n>>p;
    vector<lli> a(n);
    for(lli i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    lli l = a[0], h = a[n-1]-1;
    vector<lli> ans;
    while(l<=h){
        if(func(a,l)){
            ans.push_back(l);
        }
        l +=1;
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}