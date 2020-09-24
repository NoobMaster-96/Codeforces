#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        int sum = 0;
        bool find  = false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i] = x-a[i];
            if(a[i]==0){
                find = true;
            }
            sum += a[i];
        }
        sort(a.begin(),a.end());
        if(a[0]==0 && a[n-1]==0){
            cout<<0<<endl;
        }
        else if(sum==0){
            cout<<1<<endl;
        }
        else{
            if(find){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            } 
        }
    }
}