#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int gcd(int a, int b){ 
    if(a == b){
        return a; 
    }
    if(a > b){
        return gcd(a-b, b); 
    }
    return gcd(a, b-a); 
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        vector<int> ans(n);
        ans[0] = a[0];
        int val = a[0];
        vector<bool> vis(n,false);
        vis[0] = true;
        for(int i=1;i<n;i++){
            int temp = INT_MIN;
            int idx = -1;
            for(int j=1;j<n;j++){
                if(!vis[j]){
                    int num = gcd(val,a[j]);
                    if(num>temp){
                        temp = num;
                        idx = j;
                    }
                }
            }
            val = temp;
            ans[i] = a[idx];
            vis[idx] = true;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}