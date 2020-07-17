#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(2*n);
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        vector<int> ans;
        set<int> s;
        for(int i=0;i<2*n;i++){
            if(s.find(a[i])==s.end()){
                ans.push_back(a[i]);
                s.insert(a[i]);
            }
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}