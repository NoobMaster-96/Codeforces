#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i+=1){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<int> ans(n);
    int j = 0;
    for(int i=1;i<n;i+=2,j+=1){
        ans[i] = a[j];
    }
    for(int i=0;i<n;i+=2,j+=1){
        ans[i] = a[j];
    }
    int cnt = 0;
    for(int i=0;i<n-1;i++){
        if(i&1){
            if(ans[i]<ans[i-1] and ans[i]<ans[i+1]) cnt++;
        }
    }
    cout<<cnt<<endl;
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}
