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
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        vector<int> b = a;
        sort(b.begin(),b.end(),greater<int>());
        if(a!=b or s.size()<n){
            cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }
    }
}