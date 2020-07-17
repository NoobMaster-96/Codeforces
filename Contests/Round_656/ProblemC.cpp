#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
 
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
        int ans = 1;
        int i=n-1;
        while(i>0 && a[i-1]>=a[i]){
            i--;
            ans++;
        }
        while(i>0 && a[i-1]<=a[i]){
            i--;
            ans++;
        }
        cout<<n-ans<<endl;
    }
}