#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int d = y-x;
        int num = n-1;
        while(d%num){
            num-=1;
        }

        int diff = d/num;
        vector<int> ans;
        for(int i=x;i<=y;i+=diff){
            ans.push_back(i);
        }
        int val = x-diff;
        while(ans.size()!=n && val>0){
            ans.push_back(val);
            val -= diff;
        }
        val = y+diff;
        while(ans.size()!=n){
            ans.push_back(val);
            val += diff;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}