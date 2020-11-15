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
        int ans = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool visited[n];
        memset(visited,0,sizeof(visited));
        map<lli,vector<lli>> m;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                visited[i] = 1;
                for(int j=32;j>=0;j-=1){
                    int val = (lli)1<<j;
                    if(val&a[i]){
                        m[j].push_back(a[i]);
                        break;
                    }
                }
            }
        }
        lli cnt = 0;
        for(auto x:m){
            if(x.second.size()>1){
                lli val = x.second.size();
                cnt += (val*(val-1)/2);
            }
        }
        cout<<cnt<<endl;
    }
}